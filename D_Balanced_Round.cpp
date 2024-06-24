// Code by Shobhit
#define pb              push_back
#define ll              long long

#include <bits/stdc++.h>
using namespace std;


int main() 
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
cout.tie(NULL);
int t,n,k;
cin>>t;
while(t--)
{
    cin>>n;
    cin>>k;
    vector<ll>v;
    // set<ll>count;
    // count.insert(0);
    ll max=0;
    int i;
    for(i=0;i<n;i++)
    {
        ll input;
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    int current=0;
    for(i=0;i<n-1;i++)
    {
        ll diff=v[i+1]-v[i];
            if(diff<=k)
            {
                current++;
             //  cout<<v[i+1]<<" "<<v[i]<<"current = "<<current<<endl;
            }
            else
            {
               // int bk=n-current;
                //count.insert(n);
                if(max<current)
                max=current;
                current=0;
            }
             if(max<current)
                max=current;
    }
    
    max++;
    ll bakka=n-max;
    cout<<bakka<<endl;
 }
}

   






