#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t,x;
	cin>>t;
    
	for(int i=1;i<=t;i++)
	{
       // cout<<i<<endl;
	    cin>>x;
	    double rem=0.2*x;
      //  int okk=floor(rem);
        // if(okk!=rem)
        // okk=floor(rem)+1;
	    // int out;
	    // if(100%okk==0)
	    // out=100/okk;
	    // else
	    // out=(100/okk)+1;
        double out=100/rem;
        int okk=floor(out);
        if(okk!=out)
        okk++;
	    cout<<okk<<endl;
	}
	return 0;
}
