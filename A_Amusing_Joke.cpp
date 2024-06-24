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
//vector<bool>isPrime(N,1);int sieve(int N);

void solve()
{
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    unordered_map<char,ll>mp,check;
    unordered_set<char>s,okk;
    ll i;
  
    
    for(i=0;i<a.size();i++)
    {
        mp[a[i]]++;
        s.insert(a[i]);
    }
    for(i=0;i<b.size();i++)
    {
        mp[b[i]]++;
        s.insert(b[i]);
    }
    for(i=0;i<c.size();i++)
    {
        check[c[i]]++;
        okk.insert(c[i]);
    }
    ll flag=0;
    for(auto it : s)
    {
        if(mp[it]!=check[it])
        {
            cout<<"NO"<<endl;
            flag++;
            break;
        }
        
    }
    if(flag==0&&okk.size()==s.size())
    cout<<"YES"<<endl;
    else if(flag==0)
    cout<<"NO"<<endl;
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