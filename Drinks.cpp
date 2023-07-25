#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    float b=0;
    for(int i=0;i<n;i++){
        b = b + (a[i]);
    }
    float c = (b/n);
    cout<<fixed;
    cout<<setprecision(12);
    cout<<c;
}