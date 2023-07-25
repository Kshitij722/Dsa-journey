#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[2*n];
        for(int i=0;i<(2*n);i++){
            cin>>a[i];
        }
        sort(a,a + 2*n);
        long long ans = INT_MAX;
        for(int i=1;i<=n+1;i++){
              ans = min(ans,(a[n+i-1] - a[i]));
        }
        cout<<ans<<endl;
    }
	return 0;
}
