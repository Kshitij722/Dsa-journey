#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<=i+1){
                cout<<"YES"<<endl;
                goto end;
            }


        }
        cout<<"NO"<<endl;
        end:;
    }
    return 0;
}