#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,h="";
	    cin>>s;
	       // h[0]=s[0];
	        for(int i=0;i<n;i++){
                if((n-i-1)>i){
	             if(s[i]=='0' && s[n-i-1]=='0'){
	                   h = s[i] + h;
	                   h = h + s[n-i-1];
	             }
	             if(s[i]=='0' && s[n-i-1]=='1'){
	                 h = s[i] + h;
	                 h = s[n-i-1] + h;
	             }
	             if(s[i]=='1' && s[n-i-1]=='0'){
	                 h = h + s[i];
	                 h = h + s[n-i-1];
	             }
	             if(s[i]=='1' && s[n-i-1]=='1'){
	                 h = h + s[i];
	                 h = s[n-i-1] + h;
	             }
                }
                if((n-i-1)==i){
                    if(s[i]=='0'){
                        h = s[i] + h;
                    }
                    else{
                        h = h + s[i];
                    }
                }
	        }
	    cout<<h<<endl;
	}
	return 0;
}

