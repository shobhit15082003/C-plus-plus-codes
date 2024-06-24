#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int N = 1e6 + 10;

int pf[N];

int main()

{

    ios::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);

    ll n, k;

    cin >> n >> k;

    int a[n], flag = 0;

    for (int i = 1; i <= n; i++)

    {

        cin >> a[i];
    }

   // sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; i++)

    {

        pf[i] = pf[i - 1] + a[i];
    }

    for (ll i = 1; i <= n; i++)

    {

        if (k == pf[i + 1] - pf[i - 1])

        {

            flag = 1;
        }
    }

    
    if (flag == 1)

    {

        cout << "YES" << endl;
    }

    else

    {

        cout << "NO" << endl;
    }

    return 0;
}