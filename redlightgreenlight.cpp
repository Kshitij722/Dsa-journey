#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,h;
	cin>>t;
	while(t--){
	    cin>>n>>h;
		int a[n];
	      int c=0;
	    for(int i=0;i<n;i++){
	        cin>> a[i];
	        if(a[i]>h){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
