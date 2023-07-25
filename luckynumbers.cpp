#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     char x[50];
	     cin>>x;
	     for(int i=0;i<50;i++){
	         if(x[i]=='7'){
	             cout<<"YES"<<endl;
	             goto end;
	         }
	     }
	     cout<<"NO"<<endl;
	     end:;
	}
	return 0;
}
