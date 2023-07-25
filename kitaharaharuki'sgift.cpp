#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==100){
            c++;
        }
    }
    // cout<<c;
    if(c!=n && c!=0){
    if((c%2==0 && (n-c)%2!=0)){
         cout<<"YES";
        }
    if(c%2!=0 && (n-c)%2==0){
        cout<<"NO";
    }    
    if(c%2==0 && (n-c)%2==0){
        cout<<"YES";
    }
    if(c%2!=0 && (n-c)%2!=0){
        cout<<"NO";
    }
    }
    else{
        if(n%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    
    return 0;
}