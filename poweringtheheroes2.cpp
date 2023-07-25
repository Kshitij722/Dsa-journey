#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long c=0;
        vector<int> b;
        
        for(auto i : a){
           
        //    cout<<j;
             b.push_back(i);
        //    cout<<max_p<<endl;
           if(i==0){
             auto j = max_element(b.begin(),b.end());
              c+=*j;
              sort(b.begin(),b.end());
              b.pop_back();
              
           }
        }
        cout<<c<<endl;
    }
    return 0;
}