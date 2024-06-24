// Code by Shobhit
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize     ("Ofast")
#pragma GCC optimize     ("unroll-loops")
#pragma GCC optimize     ("03")
#pragma GCC optimize     ("fast-math")
#pragma GCC target       ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,avx2,mmx,fma,avx,tune=native")

#define pb              push_back
#define ll              long long
#define ld              long double
#define fast            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define test_case       int t; cin>>t; while(t--)
#define all(x)           (x).begin(),(x).end()
#define rall(x)           (x).rbegin(),(x).rend()

#define vll              vector<long long>
#define vc               vector<char>
#define sll              set<long long>
#define sc              set<char>
#define usll              unordered_set<long long>
#define usc              unordered_set<char>
#define vpll              vector<pair<ll,ll>>
#define vpcl              vector<pair<char,ll>>
#define vplc              vector<pair<ll,char>>
#define mll              map<ll,ll>
#define mcl              map<char,ll>
#define mlc              map<ll,char>
#define umll              unordered_map<ll,ll>
#define umcl              unordered_map<char,ll>
#define umlc              unordered_map<ll,char>

#define vin(v,n);        vector<ll>v;for(ll i=0;i<n;i++){ll input; cin>>input; v.pb(input);}
#define ff               first
#define ss               second
#define ppb             pop_back

#define yep             cout << "YES" << endl
#define nope            cout << "NO" << endl
#define change          cout << endl
#define cout(a)         cout << a << endl

#define print(v)           for(int i=0;i<(v).size();i++) cout<<v[i]<<" ";
#define printp(v)           for(auto &item : v) cout<<item.ff<<" "<<item.ss<<endl;

#define hello           cout<<"hello"<<endl
//<------------------------------------------------------------------------------------------------------------------>

void printBinary(int num);
long long power_iteration(long long a,long long b);
int factorial(int n);
string to_upper(string a);
string to_lower(string a);
ll min(ll a,ll b);
ll max(ll a,ll b);
//vector<bool>isPrime(N,1);void sieve(int N);


ll min(ll a,ll b)
{
    if(a<b)
    return a;
    return b;
}




ll max(ll a,ll b)
{
    if(a>b)
    return a;
    return b;
}


string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}



string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}

void printBinary(int num)
{
  for(int i=10;i>=0;--i)
  {
    cout<<((num>>i)&1);
  }
cout<<endl;
}



long long power_iteration(long long a,long long b)
{  
  long long ans=1;
while(b)
{
  if(b&1)
{
ans=ans*a;
}
a=a*a;
b=b>>1;
}
return ans;
}




int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// void sieve(int N)
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


//<------------------------------------------------------------------------------------------------------------------>




void solve()
{
    ll n;
    cin>>n;
    ll v[n][n] ;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        cin>>v[i][j];
    }
    vll out;
    ll baka =1e1000;
    
     ll flag=0;

    for(ll i=0;i<baka;i++)
    {
      flag=0;
        vll fuck,okk;
        ll shit=i;
         while(shit>0)
         {
            fuck.pb(shit%10);
            shit/=10;
         }
         for(ll j=0;j<fuck.size();j++)
         {
            okk.pb(fuck[n-i-1]);
         }
         for(ll m=0;m<n;m++)
         {
            for(ll p=0;p<n;p++)
            {
                if(v[m][n]!=(okk[m]|okk[n]))
                {
                    flag++;
                }
            }
         }
         if(flag==0)
         {
            yep;
            print(okk);
            return;
         }
    }
    nope;
}




int main() 
{
 fast
 test_case
 solve();
}































//End of code by Shobhit







































//Shobhit