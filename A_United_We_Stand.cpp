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

void printBinary(int num);
long long power_iteration(long long a, long long b);
int factorial(int n);
int prime(ll);
// vector<bool>isPrime(N,1);int sieve(int N);

void solve()
{
    vll a, b, c;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        a.pb(input);
        int check = prime(input);
        if (check == 1)
            b.pb(input);
        else
            c.pb(input);
    }
    ll flag = 0, m, mc;
    if (c.size() == 0)
    {

        m = *min(all(b));
        if (m == 1)
        {
            ll m = 10e9;
            for (int h = 0; h < b.size(); h++)
            {
                if (m > b[h] && b[h] != 1)
                {
                    m = b[h];
                }
            }

            mc = m;
        }
        if (m == 1)
            m = mc;

       

        for (auto it = b.begin(); it != b.end(); it++)
        {

            if (*it == m)
            {
                c.pb(m);
                b.erase(it);
                it--;
            }
        }
    }
    else if (b.size() == 0)
    {
        m = *min(all(c));

        if (m == 1)
        {
            ll m = 10e9;
            for (int h = 0; h < c.size(); h++)
            {
                if (m > c[h] && c[h] != 1)
                {
                    m = c[h];
                }
            }
            mc = m;
        }
        if (m == 1)
            m = mc;

        

        for (auto it = c.begin(); it != c.end(); it++)
        {

            if (*it == m)
            {
                b.pb(m);
                c.erase(it);
                it--;
            }
        }
    }

    if (b.size() == 0 || c.size() == 0)
        cout << "-1" << endl;
    else
    {
        cout << b.size() << " " << c.size() << endl;
        for (auto it : b)
            cout << it << " ";
        cout << endl;
        for (auto it : c)
            cout << it << " ";
        cout << endl;
    }
}

int prime(ll s)
{
    if (s == 1)
        return 1;

    for (ll i = 2; i * i <= s; i++)
    {
        if (s % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    fast
        test_case
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