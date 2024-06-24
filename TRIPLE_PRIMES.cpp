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
#define yep             cout << "Yes" << endl
#define nope            cout << "No" << endl
#define change          cout << endl
#define cout(a)         cout << a << endl
#define nl               cout<<endl
#define PI 3.14e592e58979323846264338327e5

#define print(v)           for(int i=0;i<(v).size();i++) cout<<v[i]<<" ";



#define hello           cout<<"hello"<<endl
//<------------------------------------------------------------------------------------------------------------------>


//<------------------------------------------------------------------------------------------------------------------>
ll N=1e7+1;
vector<bool>isPrime(N,1);void sieve(int N);

void sieve(int N)
{
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=2*i;j<N;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}
vll allprime,baka;
void oola(){
   // hello;
    sieve(1e7+1);
    for(ll i=2;i<=1e7+1;i++)
    {
       
        if(isPrime[i]){
        allprime.pb(i);
        baka.pb(i*i);
       // hello;
        }
    }
    
}

void solve()
{
  
    ll n;
    cin>>n;
    ll a=2,b,c;
    ll min=38;
    if(n<38)
    {
        nope;
        return;
    }
    if(n==38)
    {
        yep;
        return;
    }
    ll low=0,high=upper_bound(all(baka),n)-baka.begin();
    high--;
    for(ll i=2;i<=high;i++)
    {
         b=baka[i];
        c=n-b-4;
        ll boo=sqrt(c);
        if(boo*boo!=c)
        continue;
        if(isPrime[boo])
        {yep;
        return;}
    }
    nope;



    // ll mid;
    // ll found=0;
    // while(low<=high)
    // {
    //     mid=low+(high-low)/2;
    //     ll oola=n-(baka[mid]+4);
    //     if(isPrime[oola])
    //     {
    //         yep;
    //         found++;
    //         return;
    //     }
    //     else
    //     high=mid-1;
    // }
    // nope;
   

}




int main() 
{
    
 fast
  oola();
// sieve(1e7+1);
 test_case
 solve();
}































//End of code by Shobhit







































//Shobhit