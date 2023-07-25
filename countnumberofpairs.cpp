#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> a;
        for(int i=0;i<s.length();i++){
              a[s[i]]++;
        }
        // for(auto i : a){
        //     cout<< i.first<<" "<<i.second;
        // }
        // cout<<endl;
        int c=0,op=0;
        for(int i=0;i<26;i++){
            c+=min(a['a'+i],a['A'+i]);
            op = min((abs(a['a'+i] - a['A'+1]))/2,k);
            k-=op;
            c+=op;
        }
        cout<<c<<endl;

    }
    return 0;
}