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
#define outo(v)                          \
    for (int i = 0; i < (v).size(); i++) \
        cout << v[i] << " ";
#define outp(v)          \
    for (auto &item : v) \
        cout << item.ff << " " << item.ss << endl;

void printBinary(int num);
long long power_iteration(long long a, long long b);
int factorial(int n);
// vector<bool>isPrime(N,1);int sieve(int N);

vector<ll> decrease(vll v)
{
    // for (ll i = 0; i < v.size(); i++)
    //     v[i]--;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        *it=*it-1;
        if (*it == 0)
        {
            v.erase(it);
            it--;
        }
    }

    return v;
}
// vector<ll> del(vll v)
// {
//     for (auto it = v.begin(); it < v.end(); it++)
//     {
//         if (*it == 0)
//         {
//             v.erase(it);
//             it--;
//         }
//     }
//     return v;
// }
void solve()
{
    ll n;
    cin >> n;
    vll a, out, temp;
    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        a.pb(input);
    }
    temp = a;
    ll flag = 0;
    out.pb(n);
    while (a.size() != 0)
    {

        a = decrease(a);
      //  a = del(a);

        if (a.size() != 0)
            out.pb(a.size());
    }
    ll ouch = 0;
    if (temp.size() != out.size())
        cout << "NO " << endl;
    else
    {
        for (ll i = 0; i < out.size(); i++)
        {
            if (temp[i] == out[i])
                ouch++;
        }
        if (ouch == out.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    //  outo(temp);
}

int main()
{
    fast
        ll t;
    cin >> t;
    while (t--)
    {
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