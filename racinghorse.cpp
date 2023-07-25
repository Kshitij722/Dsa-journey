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
	    vector<int> b;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    for(int i=0;i<n-1;i++){
	        b.push_back(a[i+1]-a[i]);
	    }
	    sort(b.begin(),b.end());
	    cout<<b[0]<<endl;
        // for(auto i:b){
        //     cout<<i<<" ";
        // }
        // for(auto i:a){
        //     cout<<i<<" ";
        // }
	}
	return 0;
}
