#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int count=0;
    vector<int> a(n);
    long long sum1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag = false;
    int c=0;
    for(int i=0;i<n;i++){
        sum1+=abs(a[i]);
        if(a[i]<0 && flag==false){
            flag = true;
            c++;
        }
        if(a[i]>0){
            flag = false;
        }
    }
    cout<<sum1<<" "<<c<<endl;

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