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




void printBinary(int num);
long long power_iteration(long long a,long long b);
int factorial(int n);
//vector<bool>isPrime(N,1);int sieve(int N);

char a='a';
char e='e';
char i='i';
char o='o';
char u='u';

unordered_map<char,int>mp={{'a',0},{'e',1},{'i',2},{'o',3},{'u',4}};



void solve()
{
    //  cout<<"HELLO"<<endl;
    ll n,i,j;
    cin>>n;
    vector<int>v;
    for( i=0;i<n;i++)
    {
        string input;
        cin>>input;
        ll fuck=0;
        for( j=0;j<input.size();j++)
        {
           // cout<<"HELLO"<<endl;
            char ch=input.at(j);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                if(ch==a)
                fuck|=1<<mp[a];
                else  if(ch==e)
                fuck|=1<<mp[e];
                else  if(ch==i)
                fuck|=1<<mp[i];
                else  if(ch==o)
                fuck|=1<<mp[o];
                else  if(ch=u)
                fuck|=1<<mp[u];
                
               

            }
        }
        v.pb(fuck);
    }
    vll count(v.size(),0);
    for(i=0;i<=4;i++)
    {
        for(j=0;j<v.size();j++)
        {
            if(v[j]&(1<<i))
            count[i]++;
        }
    }
   
    ll op=0;
    for(i=0;i<v.size();i++)
    {
        int size=count[i];
    if(size>=3)
    {
        
    ll fact=factorial(size-3);
    ll output=fact*(size-2)*(size-1)*size;
    output=output/(6*fact);
    op+=output;
    }
    }
    cout<<(int)op<<endl;
    
  
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