#include <bits/stdc++.h>
using namespace std;
#define  ll long long
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string A,B;cin>>A>>B;
	     if(n<m){
	        swap(n,m);
	        swap(A,B);
	    }
	    vector<ll> arr1(26,0),arr2(26,0);
	    for(int i=0; i<n; ++i)arr1[A[i]-'a']++;
	    for(int i=0; i<m; ++i)arr2[B[i]-'a']++;
	    int odd=0;
	    bool flag=false;
	  for(int i=0; i<26; ++i){
	     if(arr1[i]<arr2[i]){
	         cout<<"no"<<endl;
	         flag=true;
	         break;
	     }
	     if((arr1[i]-arr2[i])%2)odd++;
	  }
	  if(flag==false){
	      
	   if(odd<2)
	       cout<<"yes"<<endl;
	   else cout<<"no"<<endl;
	  }
	}
	return 0;
}
