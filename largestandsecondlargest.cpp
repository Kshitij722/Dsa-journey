#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    set<int> b;
	    for(int i=0;i<n;i++){
	        b.insert(a[i]);
	    }
	//    sort(b.begin(),b.end());
	   //int i=n-1;
       int i = b.size();
	   cout<<*(b.rbegin()) + *(++b.rbegin())<<endl;
	   //while(TRUE){
	   //    if(a[i]!=a[i-1]){
	   //        cout<<a[i]+a[i+1];
	   //    }
	   //}
	    
	}
	return 0;
}
