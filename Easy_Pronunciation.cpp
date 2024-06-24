#include <iostream>
using namespace std;
int nvowel(char c){
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  return 0;
  else 
  return 1;
}

int main() {
	int t,n,count;
	cin>>t;
	while(t--){
	  cin>>n;
	  string s;
	 
	  cin>>s;
	  bool flag=false;
	  for(int i=0;i<n-4;i++){
	  if (nvowel(s[i])==1 && nvowel(s[+1])==1 && nvowel(s[i+2])==1 && nvowel(s[i+3])==1)
   {   
       flag=true;
       	cout<<"NO"<<endl;
	   break;
	  }
	      
	  }
	  

     if(flag==false)
	  	cout<<"YES"<<endl;
	  
	}	
	return 0;
}