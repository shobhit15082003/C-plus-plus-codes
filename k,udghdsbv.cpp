#include <iostream>
#include <vector>
#include <numeric>
#define MOD 1000000007
using namespace std;
long long mod_inv(long long x, long long mod) {
    long long result = 1;
    long long power = mod - 2;
    while (power) {
        if (power % 2) {
            result = result * x % mod;
        }
        x = x * x % mod;
        power /= 2;
    }
    return result;
}

vector<long long> factorial(int n, long long mod) {
    vector<long long> fact(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        fact[i] = fact[i - 1] * i % mod;
    }
    return fact;
}
long long binomial_coeff(int n, int k, const vector<long long>& fact, long long mod) {
    if (k > n || k < 0) {
        return 0;
    }
    return fact[n] * mod_inv(fact[k], mod) % mod * mod_inv(fact[n - k], mod) % mod;
}
long long count_ways(int N, int K, const vector<int>& A) {
    int sum_A = accumulate(A.begin(), A.end(), 0);
    int M = K - sum_A;
    vector<long long> fact = factorial(M + N - 1, MOD);
    return binomial_coeff(M + N - 1, N - 1, fact, MOD);
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cout << count_ways(N, K, A) << endl;
    return 0;
}



