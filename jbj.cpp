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
ll add=0,xoring=0,anding=0,oring=0,carry=0;

ll convert(long long n) {
  ll dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

void addi(ll fora,ll forb,ll i)
{
   if(fora==0&&forb==0&&carry==0)
  {

 
  carry=0;
  }
   else if(fora==0&&forb==0&&carry!=0)
   {
    
    add=(1<<i)|add;
    carry=0;
   }
   else if(fora==0&&forb!=0&&carry==0)
   {
    add=(1<<i)|add;
    carry=0;
   }
   else if(fora==0&&forb!=0&&carry!=0)
   {
    
   
    carry=1;
   }
   else if(fora!=0&&forb==0&&carry==0)
   {
    add=(1<<i)|add;
    carry=0;
   }
   else if(fora!=0&&forb==0&&carry!=0)
   {
   
    
    carry=1;
   }
   else if(fora!=0&&forb!=0&&carry==0)
   {
   
    
    carry=1;
   }
   else if(fora!=0&&forb!=0&&carry!=0)
   {
    add=(1<<i)|add;
    carry=1;
   }

    
}
void xori(ll fora,ll forb)
{
    if(fora!=0&&forb!=0)
    {
        
            xoring=xoring<<1;
        
        
    }
    else if(fora==0&&forb==0)
    {
        
            xoring=xoring<<1;
        
        
    }
    else if(fora!=0&&forb==0)
    {
       
            xoring=xoring<<1;
            xoring++;
        
        
    }
    else if(fora==0&&forb!=0)
    {
        
        
            xoring=xoring<<1;
            xoring++;
        
        
    }
}
void andi(ll fora,ll forb)
{
    if(fora!=0&&forb!=0)
    {
       anding= anding<<1;
        anding++;
    }
    else
    anding=anding<<1;
}
void ori(ll fora,ll forb)
{
    if(fora==0&&forb==0)
   oring= oring<<1;
    else
    {
        oring= oring<<1;
        oring++;
    }
}


void solve()
{
    
//     ll check=1;
//     check=check<<1;
// printBinary(check);
    ll a,b;
    cin>>a;
    a=convert(a);
    cin>>b;
    b=convert(b);
    ll fora,forb;
    
    
    for(ll i=3;i>=0;i--)
    {
        ll store=1<<i;
        fora=a&store;
        forb=b&store;
        if(fora!=0)
        fora=1;
        if(forb!=0)
        forb=1;
       // addi(fora,forb);
        andi(fora,forb);
        xori(fora,forb);
        ori(fora,forb);
        // cout<<fora<<" "<<forb<<" ";
        // printBinary(store);
        
    }
    for(ll i=0;i<=3;i++)
    {
        //ll store=1<<i;
        
        ll o=a,p=b;
        ll aing=a&1,bing=b&1;
        a=a>>1;
        b=b>>1;
        cout<<aing<<" "<<bing<<endl;
        fora=aing;
        forb=bing;
        
        addi(fora,forb,i);
        
        
    }
   // cout<<a<<" "<<b<<endl;
    cout<<"AND : ";
    printBinary(anding);
     cout<<"OR : ";
    printBinary(oring);
     cout<<"XOR : ";
    printBinary(xoring);
     cout<<"ADDING : ";
     if(carry==1)
    cout<<"1";
    printBinary(add);
 }




int main() 
{
 
 test_case
 solve();
}



void printBinary(int num)
{
  for(int i=3;i>=0;--i)
  {
    cout<<((num>>i)&1);
  }
cout<<endl;
}



