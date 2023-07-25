#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int t;
    cin>>t;
    int total=0;
    int a[100005];
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            total++;

        }
        a[i]=total;
    }
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}