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
int t;
cin>>t;
while(t--)
{
    ll n;
    ll a,b,count=1;
   // vector<ll>shobhit;
   // unordered_map<ll ,ll>mp;
    //unordered_map<ll,ll>find;
    cin>>n;
    int max=0,fuck=0;
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        if(a<=10)
        {
          //  mp[b]=a;
           // find[b]=count;
           // shobhit.push_back(b);
            if(b>max)
           {
            max=b;
            fuck=count;
           } 
        }
        count++;
     }
    // sort(shobhit.begin(),shobhit.end());
     //ll bakchodi=shobhit[shobhit.size()-1];
   //auto it=mp.rbegin();
    // ll value=mp[max];
    // ll output=find[value];
    cout<<fuck<<endl;

}
}

   







//End of code by Shobhit







































//Shobhit