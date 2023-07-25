#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    vector<int> b;
   
    while(q--){
        int count=0;
        int m;
        cin>>m;
        if(m>=a[n-1]){
             b.push_back(n);
        }
        else if(m<a[0]){
            b.push_back(0);
        }
        else{
            int l=0;
            int r=n-1;
            while(l<r){
                int mid = (l+r)/2;
                if(a[mid]<=m){
                    l = mid + 1;
                }
                else{
                    r = mid;
                }
            }
            b.push_back(l);
        }
    }
    for(auto i:b){
        cout<<i<<endl;
    }
 

    return 0;
}