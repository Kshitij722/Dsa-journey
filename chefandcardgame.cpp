#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q=0,w=0;
		cin>>n;
	    while(n--){
			long long a,b;
			cin>>a>>b;
			int s=0;
			for(int i=0;i<(a);i++){
			int rem = a%10;
			s= s + rem;
            int num = a/10;
		}
		int c=0;
		for(int i=0;i<b;i++){
			int rem = b%10;
			c= c + rem;
            int num = b/10;
		}
		if(c>s){
			q++;
		}
		if(s>c){
			w++;
		}
		if(s==c){
			w++;
			q++;
		}

		}
		if(w>q){
			cout<<"0 "<<w<<endl;
		} 
		if(w<q){
			cout<<"1 "<<q<<endl;
		}
		if(w==q){
			cout<<"2 "<<q<<endl;
		}

 		
	    
	}
	return 0;
}
