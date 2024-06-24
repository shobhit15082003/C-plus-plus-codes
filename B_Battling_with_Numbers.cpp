// Code by Shobhit
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define test_case \
    int t;        \
    cin >> t;     \
    while (t--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).begin(), (x).end()
#define yep cout << "YES" << endl;
#define nope cout << "NO" << endl;
#define vll vector<long long>
#define vin(v, n)              \
    ;                          \
    vector<ll> v;              \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll input;              \
        cin > input;           \
        v.pb(input);           \
    }
#define ff first
#define ss second
#define out(v)                           \
    for (int i = 0; i < (v).size(); i++) \
        cout << v[i] << " ";
#define outp(v)          \
    for (auto &item : v) \
        cout << item.ff << " " << item.ss << endl;

void printBinary(int num);
long long power_iteration(long long a, long long b);
int factorial(int n);
// vector<bool>isPrime(N,1);int sieve(int N);

ll bakka(vll a, vll b)
{
    ll x=1;
    for (ll i = 0; i < a.size(); i++)
    {
      //  x = x * (ll)pow(a[i],b[i]);
        x=x*power_iteration(a[i],b[i]);
    }
    return x;
}

ll yamite(ll a, ll b)
{
}
ll kudasai(ll a, ll b)
{
}

void solve()
{
    ll mod = 998244353;
    ll n, m;
    vll a, b, c, d;
    ll max;

    ll count = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        a.pb(input);
    }
    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        b.pb(input);
    }
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll input;
        cin >> input;
        c.pb(input);
    }
    for (ll i = 0; i < m; i++)
    {
        ll input;
        cin >> input;
        d.pb(input);
    }
    ll x = bakka(a, b);
    ll y = bakka(c, d);

    if (x >= y)
        max = x;
    else
        max = y;
    cout<<x<<" "<<y<<endl;
    // for (ll j = 1; j * j <= max; j++)
    // {
    //     for (ll i = 1; i <= max; i++)
    //     {

    //         ll yes = __gcd(j, i);
    //         ll confirm = (i * j) / yes;
    //         if (yes == y && confirm == x)
    //             count = ((count % mod) + (2 % mod)) % mod;
    //     }
    // }
    // cout << count << endl;
}
int main()
{
    fast

    solve();
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