// Code by Shobhit
#define pb              push_back
#define ll              long long

#include <bits/stdc++.h>
using namespace std;
void printBinary(int num);
int factorial(int n);
long long power_iteration(long long a,long long b);

int main() 
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    int a,b,count=1;

    map<int ,int>mp,find;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        if(a<=10)
        {
            mp[b]=a;
            find[a]=count;
        }
        count++;
            

    }
   auto it=mp.rbegin();
    auto value=it->second;
    auto output=find[value];
    cout<<output<<endl;

}
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







































//Shobhit