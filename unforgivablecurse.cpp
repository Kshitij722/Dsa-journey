#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,t;
        cin>>s;
        cin>>t;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
            if(s[i+3]==t[i] || s[i+4]==t[i]){
                    s[i] = t[i];
            }

            }
        }
        cout<<s<<endl;
        if(s==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}