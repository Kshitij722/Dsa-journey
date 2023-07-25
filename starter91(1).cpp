#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    char c='A';
	    if(s[0]=='A'){
	        a++;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]==s[i+1]){
	            if(s[i]=='A'){
	                a++;
	            }  
	            else{
	                b++;
	            }
	        }
	        
	    }
	    }
	    else{
	        for(int i=0;i<n;i++){
	            if(s[i]==s[i+1]){
	                if(s[i]=='A'){
	                    a++;
	                }
	                else{
	                    b++;
	                }
	            }
	        }
	    }
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
