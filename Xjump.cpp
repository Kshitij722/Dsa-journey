#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>=y){
	        if(x % y==0){
	            cout<<x/y<<endl;
	        }
	        else{
	            int w =x/y;
	            int j = x - (y*w);
	            cout<<w + j<<endl;
	        }
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}
