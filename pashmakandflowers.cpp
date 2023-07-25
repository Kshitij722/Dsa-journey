#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    // for(auto i=a.begin();i!=a.end();i++){
    //     cout<<*i;
    // }
    long long b = a[n-1] - a[0];
    long long count1 = 0;
    long long  count2 = 0;
    for(int i=0;i<n;i++){
        if(a[i] == a[n-1]){
            count1++;
        }
        if(a[i]==a[0]){
            count2++;
        }
    }
    long long total = (count1*count2);
    if(b==0){
        cout<<b<<" "<<n*(n-1)/2;
    }
    else{
    cout<<b<<" "<<total;
} 
}