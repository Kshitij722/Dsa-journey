#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
        }
        else{
            cout<<n/k +2<<endl;
        }

    }
    return 0;
}