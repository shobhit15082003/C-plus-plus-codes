// Code by Shobhit
#include <bits/stdc++.h>
using namespace std;

#define pb              push_back
#define ll              long long
#define fast            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define test_case       int t; cin>>t; while(t--)
#define all(x)           (x).begin(),(x).end()
#define rall(x)           (x).begin(),(x).end()
#define yep              cout<<"YES"<<endl;
#define nope             cout<<"NO"<<endl;
#define vll              vector<long long>
#define vc               vector<char>
#define vin(v,n);        vector<ll>v;for(ll i=0;i<n;i++){ll input; cin>input; v.pb(input);}
#define ff               first
#define ss               second
#define out(v)           for(int i=0;i<(v).size();i++) cout<<v[i]<<" ";
#define outp(v)           for(auto &item : v) cout<<item.ff<<" "<<item.ss<<endl;

void printBinary(int num);
long long power_iteration(long long a,long long b);
int factorial(int n);
// ll N=10e5+1;
// vector<bool>isPrime(N,1);


// void sieve(int N)
// {
//     isPrime[0]=false;
//     isPrime[1]=true;
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

void solve()
{
    vector<bool>okk(10e5+1,1);
    ll k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    ll i=0;
    ll flag=0;
    ll bk=0;
   for(i=1;i*k<=d;i++)
   {
        bk++;
        okk[i*k]=false;
        if(i*k>d)
        flag++;
   }
   
   flag=0;
   for(i=1;i*l<=d;i++)
   {
        okk[i*l]=false;
        if(i*l>d)
        flag++;
   }
   flag=0;
   for(i=1;i*m<=d;i++)
   {
        okk[i*m]=false;
        if(i*m>d)
        flag++;
   }
   flag=0;
    for(i=1;i*n<=d;i++)
   {
        okk[i*n]=false;
        if(i*n>d)
        flag++;
   }
   flag=0;
   ll count=0;
    for(i=1;i<=d;i++)
    {
        if(okk[i])
        {
          //  cout<<i<<" ";
        }
        else
        count++;
    }
    if(count!=0)
    cout<<count<<endl;
    else
    cout<<"0"<<endl;
}



int main() 
{
 fast

 solve();
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








//End of code by Shobhit



















//void solve()
// {
//     ll k,l,m,n,d;
//     cin>>k;
//     cin>>l;
//     cin>>m;
//     cin>>n;
//     cin>>d;
//     sieve(d+1);
//     isPrime[k]=false;
//     isPrime[l]=false;
//     isPrime[m]=false;
//     isPrime[n]=false;
//     ll count=0;
//     for(ll i=1;i<=d;i++)
//     {
//         if(isPrime[i])
//         {

//         }
//         else
//         count++;
//     }
//     if(k==1||l==1||m==1||n==1)
//     cout<<d<<endl;
//     else if(d<k&&d<l&&d<m&&d<n)
//     cout<<"0"<<endl;
//     else
//     cout<<count<<endl;

// }



















//Shobhit