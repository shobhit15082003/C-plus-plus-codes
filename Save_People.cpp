// Code by Shobhit
#include <bits/stdc++.h>
using namespace std;

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
//vector<bool>isPrime(N,1);int sieve(int N);


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


//<------------------------------------------------------------------------------------------------------------------>




void solve()
{
    ll n,m,x,y;
    cin>>n>>m;
    cin>>x>>y;
    ll x1,y1,u1,c1,area1=-99;
    ll x2,y2,u2,c2,area2=-99;
    ll x3,y3,u3,c3,area3=-99;
    ll x4,y4,u4,c4,area4=-99;
    x1=x-1;
    y1=y;
    u1=m;
    c1=y1-1+1;
    x2=x;
    y2=y+1;
    u2=n;
    c2=m-y+1;
    x3=x+1;
    y3=y;
    u3=m;
    c3=m-y3+1;
    x4=x;
    y4=y-1;
    u4=n;
    c4=x4-1+1;
    ll maxi=0;
    ll index=0;
    if(x1>=1&&x1<=n&&y1>=1&&y1<=m)
    {
        area1=m*(x1-1+1);
        if(maxi<area1)
       {
             maxi=area1;
             index=1;
       }
    }
     if(x2>=1&&x2<=n&&y2>=1&&y2<=m)
    {
        area2=n*(m-y2+1);
         if(maxi<area2)
       {
            maxi=area2;
            index=2;
       } 
    }
     if(x3>=1&&x3<=n&&y3>=1&&y3<=m)
    {
        area3=m*(n-x3+1);
         if(maxi<area3)
        {
            maxi=area3;
            index=3;
        }
    }
     if(x4>=1&&x4<=n&&y4>=1&&y4<=m)
    {
        area4=n*(y4-1+1);
         if(maxi<area4)
        {
            maxi=area4;
            index=4;
        }
    }
//      cout(u3);
//      cout(c3);
//    cout(index);
//     cout(area3);
cout(maxi);


}




int main() 
{
 fast
 test_case
 solve();
}































//End of code by Shobhit







































//Shobhit