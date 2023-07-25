#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;      
        vector<int> a(n);
        vector<int> b(n);
        multimap<int,pair<int,int>,greater<int>> c;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<a.size();++i){
            c.insert(pair<int,pair<int,int>>(b[i],make_pair(a[i],i)));
        }
        for (auto i:c){
            // cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
            if(i.second.first+i.second.second<=k){
                cout<<i.second.second + 1<<endl;
                goto end;
            }
        }
        cout<<-1<<endl;
        end:;
    }
    return 0;
}