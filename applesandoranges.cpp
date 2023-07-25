#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long n,m,c=0,count=0;
        cin>>n>>m;
        while(m!=n){
        if(m>n){
            m=m-n;
        }
        if(m<n){
            n=n-m;
        }
        }
        cout<<n<<endl;
       
    }
        
    
	return 0;
}
