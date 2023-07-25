#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<string> a;
        for(int i=0;i<n;i++){
            string name;
            cin>>name;
            a.insert(name);
        }
        for(string i : a){
            cout<<i<<endl;
        }
    }
    return 0;
}