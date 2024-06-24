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
    vin(a,n);
    vin(b,n);
    vin(c,n);
    //for a
    vll temp=a;
    auto it=max_element(all(a));
    ll maxa1_index=it-a.begin();
    ll maxa1=*it;
    ll maxa2=0,maxa2_index=-99,maxa3=0,maxa3_index=-99;
    for(ll i=0;i<n;i++)
    {
        if(maxa1_index!=i&&a[i]>=maxa2)
        {maxa2=a[i];
        maxa2_index=i;}
    }
    for(ll i=0;i<n;i++)
    {
        if(maxa1_index!=i&&a[i]>=maxa3&&maxa2_index!=i)
        {maxa3=a[i];
        maxa3_index=i;}
    }
    // b
    temp=b;
     it=max_element(all(b));
    ll maxb1_index=it-b.begin();
    ll maxb1=*it;
    ll maxb2=0,maxb2_index=-99,maxb3=0,maxb3_index=-99;
    for(ll i=0;i<n;i++)
    {
        if(maxb1_index!=i&&b[i]>=maxb2)
        {maxb2=b[i];
        maxb2_index=i;}
    }
    for(ll i=0;i<n;i++)
    {
        if(maxb1_index!=i&&b[i]>=maxb3&&maxb2_index!=i)
        {maxb3=b[i];
        maxb3_index=i;}
    }
    //for c
   
    temp=c;
     it=max_element(all(c));
    ll maxc1_index=it-c.begin();
    ll maxc1=*it;
    ll maxc2=0,maxc2_index=-99,maxc3=0,maxc3_index=-99;
    for(ll i=0;i<n;i++)
    {
        if(maxc1_index!=i&&c[i]>=maxc2)
        {maxc2=c[i];
        maxc2_index=i;}
    }
    for(ll i=0;i<n;i++)
    {
        if(maxc1_index!=i&&c[i]>=maxc3&&maxc2_index!=i)
        {maxc3=c[i];
        maxc3_index=i;}
    }
    //currently a1
    //a1 b1 c1
    vll ans;
    if(maxa1_index==maxb1_index||maxa1_index==maxc1_index||maxb1_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb1+maxc1;
        ans.pb(okk);
    }
    //a1 b1 c2
    if(maxa1_index==maxb1_index||maxa1_index==maxc2_index||maxb1_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb1+maxc2;
        ans.pb(okk);
    }
    //a1 b1 c3
    if(maxa1_index==maxb1_index||maxa1_index==maxc3_index||maxb1_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb1+maxc3;
        ans.pb(okk);
    }
    //a1 b2 c1
    if(maxa1_index==maxb2_index||maxa1_index==maxc1_index||maxb2_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb2+maxc1;
        ans.pb(okk);
    }
    //a1 b2 c2
    if(maxa1_index==maxb2_index||maxa1_index==maxc2_index||maxb2_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb2+maxc2;
        ans.pb(okk);
    }
    //a1 b2 c3
    if(maxa1_index==maxb2_index||maxa1_index==maxc3_index||maxb2_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb2+maxc3;
        ans.pb(okk);
    }
    //a1 b3 c1
    if(maxa1_index==maxb3_index||maxa1_index==maxc1_index||maxb3_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb3+maxc1;
        ans.pb(okk);
    }
    //a1 b3 c2
    if(maxa1_index==maxb3_index||maxa1_index==maxc2_index||maxb3_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb3+maxc2;
        ans.pb(okk);
    }
    //a1 b3 c3
    if(maxa1_index==maxb3_index||maxa1_index==maxc3_index||maxb3_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa1+maxb3+maxc3;
        ans.pb(okk);
    }
    //changing to a2
    //a2 b1 c1
    if(maxa2_index==maxb1_index||maxa2_index==maxc1_index||maxb1_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb1+maxc1;
        ans.pb(okk);
    }
    //a2 b1 c2
    if(maxa2_index==maxb1_index||maxa2_index==maxc2_index||maxb1_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb1+maxc2;
        ans.pb(okk);
    }
    //a2 b1 c3
    if(maxa2_index==maxb1_index||maxa2_index==maxc3_index||maxb1_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb1+maxc3;
        ans.pb(okk);
    }
    //a2 b2 c1
    if(maxa2_index==maxb2_index||maxa2_index==maxc1_index||maxb2_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb2+maxc1;
        ans.pb(okk);
    }
    //a2 b2 c2
    if(maxa2_index==maxb2_index||maxa2_index==maxc2_index||maxb2_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb2+maxc2;
        ans.pb(okk);
    }
    //a2 b2 c3
    if(maxa2_index==maxb2_index||maxa2_index==maxc3_index||maxb2_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb2+maxc3;
        ans.pb(okk);
    }
    //a2 b3 c1
    if(maxa2_index==maxb3_index||maxa2_index==maxc1_index||maxb3_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb3+maxc1;
        ans.pb(okk);
    }
    //a2 b3 c2
    if(maxa2_index==maxb3_index||maxa2_index==maxc2_index||maxb3_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb3+maxc2;
        ans.pb(okk);
    }
    //a2 b3 c3
    if(maxa2_index==maxb3_index||maxa2_index==maxc3_index||maxb3_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa2+maxb3+maxc3;
        ans.pb(okk);
    }
    // changing to a3
    //a3 b1 c1
    if(maxa3_index==maxb1_index||maxa3_index==maxc1_index||maxb1_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb1+maxc1;
        ans.pb(okk);
    }
    //a3 b1 c2
    if(maxa3_index==maxb1_index||maxa3_index==maxc2_index||maxb1_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb1+maxc2;
        ans.pb(okk);
    }
    //a3 b1 c3
    if(maxa3_index==maxb1_index||maxa3_index==maxc3_index||maxb1_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb1+maxc3;
        ans.pb(okk);
    }
    //a3 b2 c1
    if(maxa3_index==maxb2_index||maxa3_index==maxc1_index||maxb2_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb2+maxc1;
        ans.pb(okk);
    }
    //a3 b2 c2
    if(maxa3_index==maxb2_index||maxa3_index==maxc2_index||maxb2_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb2+maxc2;
        ans.pb(okk);
    }
    //a3 b2 c3
    if(maxa3_index==maxb2_index||maxa3_index==maxc3_index||maxb2_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb2+maxc3;
        ans.pb(okk);
    }
    //a3 b3 c1
    if(maxa3_index==maxb3_index||maxa3_index==maxc1_index||maxb3_index==maxc1_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb3+maxc1;
        ans.pb(okk);
    }
    //a3 b3 c2
    if(maxa3_index==maxb3_index||maxa3_index==maxc2_index||maxb3_index==maxc2_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb3+maxc2;
        ans.pb(okk);
    }
    //a3 b3 c3
    if(maxa3_index==maxb3_index||maxa3_index==maxc3_index||maxb3_index==maxc3_index)
    {
        ans.pb(-99);
    }
    else
    {
        ll okk=maxa3+maxb3+maxc3;
        ans.pb(okk);
    }
    ll okkk=*max_element(all(ans));
    
   cout(okkk);


// cout(maxa1_index);
// cout(maxb2_index);
// cout(maxc2);


}




int main() 
{
 fast
 test_case
 solve();
}































//End of code by Shobhit







































//Shobhit