Question Link- https://www.codechef.com/DEC21C/problems/UTKPLC

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char a,b,c,e,f;
	    cin>>a>>b>>c>>e>>f;
	    int lp1 = 0;
	    int lp2 = 0;
	    
	    if(e == a) {lp1 = 3;}
	    
	    else if(e == b) {lp1 = 2;}
	    
	    else
	        {lp1 = 1;}
	        
	   if(f==a){
	       lp2 = 3;
	   }
	   else if(f == b){
	       lp2 = 2;
	   }
	   else{
	       lp2 = 1;
	   }
	   
	   if(lp1 > lp2){
	       cout<<e<<endl;
	   }
	   
	   else{
	       cout<<f<<endl;
	   }
	}
	return 0;
}
