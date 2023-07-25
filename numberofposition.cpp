#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,a,b;
     cin>>n>>a>>b;
     int c=0;
     if(a+b < n){
     for(int i=a+1;i<=a+b+1;i++){
           c++;
     }
     cout<<c;
     }
     else{
        cout<<n - a;
     }

}