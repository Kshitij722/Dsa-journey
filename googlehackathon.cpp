#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b=n+(n-1);
    int q;
    cin>>q;
    int queries[q];
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
    int k=1;
    int sum=0;
    int a[b];
    for(int i=0;i<n;i++){
        sum+=k;
        a[i]=sum;
        k++;
    }
    int j=n-1;
    for(int i=n;i<=b;i++){
        sum+=j;
        a[i]=sum;
        j--;
    }
    int i=0;
    // for(int i=0;i<b;i++){
    //     cout<<a[i]<<endl;
    // }
    while(q--){
        for(int k=0;k<b;k++){
             if(a[k]==queries[i]){
                cout<<k+1<<endl;
                break;
            }
            else{
            if(a[k]>queries[i]){
                if(a[k-1]<queries[i]){
                    cout<<k+1<<endl;
                }
                if(a[k-1]==queries[i]){
                    cout<<k<<endl;
                }
            }
            }
           
        }
        i++;
    }
    


    return 0;
}