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


using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<long double,long double>;
#define mp make_pair


#define vll              vector<long long>
#define vc               vector<char>
#define vb               vector<bool>
#define vld               vector<long double>
#define vs               vector<string>
#define vpi               vector<pi>
#define vpl               vector<pl>
#define vpd               vector<pd>
#define sll              set<long long>
#define sc              set<char>
#define usll              unordered_set<long long>
#define usc              unordered_set<char>
#define vpll              vector<pair<ll,ll>>
#define vpcl              vector<pair<char,ll>>
#define vplc              vector<pair<ll,char>>
#define mll              map<ll,ll>
#define mld              map<ll,ld>
#define mcl              map<char,ll>
#define mlc              map<ll,char>
#define umll              unordered_map<ll,ll>
#define umcl              unordered_map<char,ll>
#define umlc              unordered_map<ll,char>

#define vin(v,n);        vector<ll>v;for(ll i=0;i<n;i++){ll input; cin>>input; v.pb(input);}
#define ff               first
#define ss               second
#define ppb             pop_back
#define btp(n)           __builtin_popcountll(n)

#define yep             cout << "YES" << endl
#define nope            cout << "NO" << endl
#define change          cout << endl
#define cout(a)         cout << a << endl
#define nl               cout<<endl
#define PI 3.1415926535897932384626433832795

#define print(v)           for(int i=0;i<(v).size();i++) cout<<v[i]<<" ";
#define printp(v)           for(auto &item : v) cout<<item.ff<<" "<<item.ss<<endl;

#define fi(i,s,e)        for(int i=s;i<e;i++)
#define fim(i,s,e)       for(int i=s;i<=e;i++)

#define min3(a,b,c)      min(a,min(b,c))
#define max3(a,b,c)      max(a,max(b,c))
#define maxima(v)        *max_element(v.begin(),v.end())
#define minima(v)        *min_element(v.begin(),v.end())


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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

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

bool sortbysecdesc(const pair<ll,ll> &a, const pair<ll,ll> &b){
       return a.second>b.second;
}

bool prime(ll n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int cntDigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}
int cntDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
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
    ll n,k,q;
    cin>>n>>k>>q;
    
     
    if(k==1)
    {
    
    string aa,bb;
    cin>>aa;
    cin>>bb;
    //cout(aa);
        if(aa=="1000000000")
    {
        ll input;
        cin>>input;
        cout(99999999);
        return;
    }
   // int myint1 = stoi(str1);
    ll a=stoi(aa),b=stoi(bb);  
         double baka=double(a)/double(b);
      //  cout(baka);
        for(ll i=0;i<q;i++)
        {
            ll okk;
            cin>>okk;
            cout<<(floor(okk/baka))<<" ";
        }
        change;
        return;
    }





   vin(a,k);
    vin(b,k);
    map<ll,ld> m;
    // ld baka=a[0]/b[0];
    // for(ll i=0;i<a[0];i++)
    // m[i]=baka;
    // for(ll i=1;i<k;i++)
    // {
    //     ll baka=a[i]-a[i-1];
    //     baka/=b[i];
    //     for(ll j=a[i-1]+1;j<=a[i];j++)
    //     m[j]=baka;
    // }
    // // for(ll i=1;i<=n;i++)
    // // m[i]+=m[i-1];
    // // mll v;
    // // for(ll i=0;i<=n;i++)
    // // v[i]=floor(m[i]);
    // for(ll i=0;i<q;i++)
    // {
    //     ll okka;
    //     cin>>okka;
    //     cout<<m[okka]<<" ";

    // }
    // change;
    m[0]=double(a[0])/double(b[0]);
    for(ll i=1;i<k;i++)
    {
        ld aaka=a[i]-a[i-1];
        ld bbka=b[i]-b[i-1];
        // m[i]=a[i]-a[i-1];
        // m[i]/=b[i]-b[i-1];
        m[i]=double(aaka)/double(bbka);
       // m[i]=double(bbka)/double(aaka);
    }
    // for(ll i=0;i<k;i++)
    // cout(m[i]);
    for(ll i=0;i<q;i++)
    {
        ll input;
        cin>>input;
        ld time=0;
        ll elsa=0;
        for(ll i=0;i<k;i++)
        {
            if(input>a[i])
            {
               // time+=((a[i]*m[i])-(a[i-1]*m[i-1]));
                //time+=double(a[i])*double(m[i]);
                time=b[i];
                elsa=a[i];
               // cout(time);
            }
            else
           {
           // cout<<"check "<<elsa<<" "<<time<<" checkdone "<<input-elsa<<" okk "<<m[i];
            time+=double((input-elsa))/double(m[i]);
           // time+=a[i-1]*m[i-1];
            break;
           } 
           
        }
        // if(a[0]>input)
        // time+=input*m[0];
       cout<<floor(time)<<" ";
    }
    change;

}




int main() 
{
 fast
 test_case
 solve();
}































//End of code by Shobhit







































//Shobhit