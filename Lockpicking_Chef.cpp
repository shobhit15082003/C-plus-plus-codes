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

#define vin(v,n);        vector<ll>v;for(ll i=0;i<n;i++){ll input; cin>input; v.pb(input);}
#define ff               first
#define ss               second
#define ppb             pop_back

#define yep             cout << "YES" << endl
#define nope            cout << "NO" << endl
#define change          cout << endl
#define cout(a)         cout << a << endl

#define out(v)           for(int i=0;i<(v).size();i++) cout<<v[i]<<" ";
#define outp(v)           for(auto &item : v) cout<<item.ff<<" "<<item.ss<<endl;

void printBinary(int num);
long long power_iteration(long long a,long long b);
int factorial(int n);
string to_upper(string a);
string to_lower(string a);
ll min(ll a,ll b);
ll max(ll a,ll b);
//vector<bool>isPrime(N,1);int sieve(int N);
int count(string now,string pass)
{
    ll sum=0;ll count=0;
    for(ll i=0;i<pass.length();i++)
    {
        count++;
        char ch=now[i],c=pass[i];

        int nowka=ch-'0',passka=c-'0';
        ll diff1,diff2;
        diff1=passka-nowka;
        diff2=nowka-passka;
       //  cout<<"now : "<<nowka<<" passka : "<<passka<<" diff1 "<<diff1<<" diff2 "<<diff2<<endl;
        if(diff1<0)
        {
            passka=10+passka;
            diff1=passka-nowka;
        }
        if(diff2<0)
        {
            nowka=10+nowka;
        
        diff2=nowka-passka;}
        
     // cout<<"now : "<<nowka<<" passka : "<<passka<<" diff1 "<<diff1<<" diff2 "<<diff2<<endl;
        ll add=0;
        if(diff1<0)
        add=diff2;
        else if(diff2<0)
        add=diff1;
        else if(diff1>diff2)
        add=diff2;
        else if(diff1<diff2)
        add=diff1;
        else
        add=diff1;
        sum+=add;
     //   cout<<add<<endl;
        
       // int nowka=ch-'0',passka=c-'0';

    }
 //   cout<<count<<"   "<<endl;
    return sum;
}


void solve()
{
    ll n;
    ll m;
    string s,k;
    cin>>n>>m;
    cin>>s;
    cin>>k;
    vector<string> store;
    ll min=1e9+10;
    for(ll i=0;i<=(n-m);i++)
    {
        string okk=s.substr(i,m);
        ll shobhit=count(okk,k);
        if(min>shobhit)
        min=shobhit;
       //cout<<"okk : "<<okk<<" "<<shobhit<<endl;
    }
    cout<<min<<endl;
    //ll wtf=count("0","5");
 //   cout<<wtf<<endl;
   

}




int main() 
{
 fast
 test_case
 solve();
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






//End of code by Shobhit







































//Shobhit