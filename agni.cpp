// <--------_agni_3753--------->

#include<bits/stdc++.h>
using namespace std;


#define int long long int
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define vpi vector<pair<int,int>>
#define vi vector<int>
#define si set<int>
#define mapi map<int,int>
#define cout(a) cout << a << endl
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define set_precision(a) cout<<fixed<<setprecision(a)
#define maxima *max_element(a.begin(),a.end())
#define minima *min_element(a.begin(),a.end())
#define ff(i,a,b,c) for(int i = a; i<b; i+=c)
#define fi(i,n) for(int i=0;i<n;i++)
#define fx(i,a,b,c) for(int i=a;b>i;i-=c)
#define pb push_back
#define ppb pop_back
#define __builtin_popcount  co     

#define ai for(int i=0;i<n;i++){int x;cin>>x;a.push_back(x);}

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);  }
 
void solve(){

    int n;
    cin>>n;
    int d=(n*(n-1))/2;
    vi a(d);
    
    fi(i,d){
        cin>>a[i];
    }
  
    sort(all(a));
    vi ans;
    int s=n-1;
    int in=0;
  while(s>0){
    ans.pb(a[in]);
    in+=s--;

  }
      ans.pb(1e9);
      for(auto i:ans){
        cout<<i<<" ";
      }cout<<endl;

  



}

signed main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    


    
    return 0;
}




