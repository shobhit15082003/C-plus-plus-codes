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


void printBinary(int num);
long long power_iteration(long long a,long long b);
int factorial(int n);
string to_upper(string a);
string to_lower(string a);
ll min(ll a,ll b);
ll max(ll a,ll b);
//vector<bool>isPrime(N,1);int sieve(int N);

void solve()
{
    ll n,k;
    cin>>n>>k;
    vll a,b;
    ll flag=0,flag1=0;
    ll at=0,atleast=0;
    ll sum=0,sumi=0;
    ll diff=0,diffi=0;
    for(ll i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            at+=2;
            atleast+=1;
        }
        else
        {
            at+=1;
            atleast+=2;
        }
    }
    // following 121212
    if(at>k)
    {
        flag++;
        
        
    }
    else
    {
        for(ll i=1;i<n;i++)
        {
            if(i%2==0)
            {
                sum+=2;
                a.pb(2);
            }
            else
            {
                sum+=1;
                a.pb(1);
            }
        }
         diff=k-sum;
        if(n%2==0)
        {
            if(diff%2==0)
            a.pb(diff);
            else
            {
                flag++;
               // hello;
               
            }
        }
        else
        {
            if(diff%2!=0)
            a.pb(diff);
            else
            flag++;
        }


    }

    //following 212121
    if(atleast>k)
    flag1++;
    else
    {
        for(ll i=1;i<n;i++)
        {
            if(i%2==0)
            {
                sumi+=1;
                b.pb(1);
            }
            else
            {
                sumi+=2;
                b.pb(2);
            }
        }
        diffi=k-sumi;
        if(n%2==0)
        {
            if(diffi%2!=0)
            b.pb(diffi);
            else
            {
                flag1++;
                // hello;
                //  cout<<diffi<<endl;
            }
            
        }
        else
        {
            if(diffi%2==0)
            b.pb(diffi);
            else
            flag1++;
        }
    }
    if(flag==0)
    {
        for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
        change;
    }
    else if(flag1==0)
    {
        for(ll i=0;i<n;i++)
        cout<<b[i]<<" ";
        change;
    }
    else
    {
          cout<<"-1"<<endl;
       
    }
   

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