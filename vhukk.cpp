#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

const int MOD = 1e9 + 7;

int maxMoneyNoFight(int N, vector<int>& B, vector<int>& C, vector<int>& P) {
    vector<tuple<int, int, int>> students;
    for (int i = 0; i < N; ++i) {
        students.push_back(make_tuple(B[i], C[i], P[i]));
    }

   
    sort(students.begin(), students.end());

   
    vector<long long> dp(N);
    dp[0] = get<2>(students[0]); 

    for (int i = 1; i < N; ++i) {
        long long money_with_current = get<2>(students[i]); 
        int idx = lower_bound(students.begin(), students.begin() + i, 
                              make_tuple(get<0>(students[i]), -1, -1)) - students.begin();
        long long max_money_without_conflict = (idx == 0)? 0 : dp[idx - 1];

        dp[i] = max(dp[i - 1], money_with_current + max_money_without_conflict);
    }

    return dp[N - 1] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> B(N), C(N), P(N);

    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    cout << maxMoneyNoFight(N, B, C, P) << endl;

    return 0;
}