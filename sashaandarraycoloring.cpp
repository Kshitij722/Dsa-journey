#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b.insert(a[i]);
    }
    if(b.size()==1){
        cout<<0<<endl;
    }
    else{
    int sum=0;
    sort(a.begin(),a.end());
    if(n%2==0){
        for(int i=0;i<=n/2 - 1;i++){
            sum+=a[n-1-i] - a[i]; 
        }
    }
    else{
        int z = n/2;
        for(int i=0;i<=z-2;i++){
            sum+=a[n-1-i] - a[i];
        }
        sum+=a[z+1] - a[z-1];
    }
    cout<<sum<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}