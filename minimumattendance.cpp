#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,c=0,p=0;
        cin>>n;
        char a[n];
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                c++;
            }
            if(a[i]=='1'){
                p++;
            }
        }
     
        int r= 120 - n ;
        if((r+p)>=90){
            cout<<"YES"<<endl;
        }
        if((r+p)<90){
            cout<<"NO"<<endl;
        }

    }
    
	return 0;
}
