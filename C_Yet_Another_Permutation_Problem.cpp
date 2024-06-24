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
#define vin(v,n);        vector<ll>v;for(ll i=0;i<n;i++){ll input; cin>input; v.pb(input);}
#define ff               first
#define ss               second
#define out(v)           for(int i=0;i<(v).size();i++) cout<<v[i]<<" ";
#define outp(v)           for(auto &item : v) cout<<item.ff<<" "<<item.ss<<endl;

void printBinary(int num);
long long power_iteration(long long a,long long b);
int factorial(int n);
//vector<bool>isPrime(N,1);int sieve(int N);


vector<ll>rev(vector<ll>v, ll k){
    vector<ll>temp=v;
    ll p=v.size()-1;
    for(ll i=v.size()-k;i<v.size();i++){
           temp[i]=v[p];
           p--;
    }
   return temp;
}

int cal(vll v,ll n)
{
    unordered_set<ll> s;
    s.clear();
    for(ll i=1;i<=v.size();i++)
    {
        ll value=i%n;
        ll d=__gcd(v[i-1],v[value]);
        s.insert(d);
    }
    return s.size();
}

void solve()
{
    ll n;
    cin>>n;
    vll a,temp;
    for(ll i=1;i<=n;i++)
    a.pb(i);
    vll okk={1,2,3,6,4,5,7};
    ll shobhit=cal(okk,n);
    cout<<"score : "<<shobhit<<endl;
    ll cpy=2;
    ll max=0;
    vll answer;
    while(cpy<=n)
    {
        temp=rev(a,cpy);
        cpy++;
        ll store=cal(okk,n);
      //  cout<<"score : "<<store<<"   ";
        //  for(auto it : temp)
        //     cout<<it<<" ";
        // cout<<endl;
        if(max<store)
        {
            max=store;
            answer=temp;
        }
    }
    // for(auto it : answer)
    // cout<<it<<" ";
    // cout<<endl;
    


}




int main() 
{
 fast
 test_case
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