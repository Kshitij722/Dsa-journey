#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s[n];
        for(int k=0;k<n;k++){
            cin>>s[k];

        }
       int c;
        int p=0; 
        for(int i=0;i<n;i++){
           c=0;
            for(int j=0;j<n;j++){
                if(s[i]==s[j]){
                    c+=1;
                    
                }
            
            if(c>0){
                p=c;
            }
            }
        }
        if(c>0){
            cout<<n-p<<endl;
        }
        
    }
}