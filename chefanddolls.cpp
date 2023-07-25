#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    int arr[n];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                if(i!=j){
                if(arr[i]==arr[j]){
                    c++;
                }
             }
             if(c==0){
                cout<<arr[i]<<endl;
             }
             if(c%2!=0){
                cout<<arr[i]<<endl;
             }

             }
        }
    }
	return 0;
}
