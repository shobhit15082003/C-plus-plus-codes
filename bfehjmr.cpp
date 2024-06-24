#include <iostream>
#include <vector>

using namespace std;

int count_odd_bitwise_OR_subarrays(int N, int K, vector<int>& A) {
    int count = 0;

    for (int i = 0; i < K; i++) {
        int bitwise_or = 0;
        for (int j = i; j < N; j += K) {
            bitwise_or |= A[j];
        }
        if (bitwise_or & 1) {
            count++;
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = count_odd_bitwise_OR_subarrays(N, K, A);
        cout << result << endl;
    }

    return 0;
}
