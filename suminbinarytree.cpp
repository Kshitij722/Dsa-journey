#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    long long sum1=0;
    while(n>=1){
        sum1+=n;
        n/=2;
    }
    cout<<sum1<<endl;
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