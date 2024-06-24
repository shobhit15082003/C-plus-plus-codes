// Code by Shobhit
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).begin(), (x).end()
#define yep cout << "YES" << endl;
#define nope cout << "NO" << endl;
#define vll vector<long long>

void printBinary(int num);
long long power_iteration(long long a, long long b);
int factorial(int n);
// vector<bool>isPrime(N,1);int sieve(int N);

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> check;
    ll index;

    for (ll y = 0; y < n; y++)
    {
        ll m, mini, sec;
        cin >> m;
        vll a;
        for (ll j = 0; j < m; j++)
        {
            ll input;
            cin >> input;
            a.pb(input);
        }
        // if (n == 1)
        // {
        //     ll output = *min_element(all(a));
        //     cout << output << endl;
        //     break;
        // }
        //else
        
            auto q = min_element(all(a));
            mini = *q;
            a.erase(q);
            q = min_element(all(a));
            sec = *q;
            
            check.pb({sec, mini});
        
    }
  

    sort(check.rbegin(), check.rend());

    index = check.size() - 1;
    ll sum = 0, mine = 10e9;

    ll i;
    for (i = 0; i < n - 1; i++)
    {
        sum += check[i].first;
        if (mine > check[i].second)
            mine = check[i].second;
    }
    if (mine > check[i].second)
        sum += check[i].second;
    else
        sum += mine;

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
}

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

long long power_iteration(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// int sieve(int N)
// {
//     isPrime[0]=false;
//     isPrime[1]=false;
//     for(int i=2;i<N;i++)
//     {
//         if(isPrime[i]==true)
//         {
//             for(int j=2*i;j<N;j+=i)
//             {
//                 isPrime[j]=false;
//             }
//         }
//     }
// }

// End of code by Shobhit

// Shobhit