#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> c;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                c.push_back(i);
            }
        }
        int z = c.size();
        int fp=c[0],lp=c[z-1];
        for(int i=(fp)-1;i>=0;i--){
            if(a[i]<=b[fp]){
                  fp=i;
            }
            else{
                break;
            }
        }
            for(int i=(lp)+1;i<n;i++){
            if(a[i]>=b[lp]){
                 lp=i;
            }
            else{
                break;
            }
        }
        cout<<fp+1<<" "<<lp+1<<endl;
        
        
    } 
    return 0;
}