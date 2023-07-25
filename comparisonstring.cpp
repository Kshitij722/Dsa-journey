#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1;
        int flag=1;
        for(int i=0;i<n;i++){
            count = max(count,flag);
            if(s[i]!=s[i+1]){
                flag=1;
            }
            else{
                flag++;
            }
        }
        cout<<max(count,flag)+1<<endl;

    }
    return 0;
}