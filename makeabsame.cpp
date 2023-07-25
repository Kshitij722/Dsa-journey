#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        int flag=0;
        cin >> n;
        vector<int> a(n), b(n), c;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        for(int i=0; i<n; i++) {
            if(a[i]!=b[i]) {
                c.push_back(i);
            }
        }
        for(int i=0; i<c.size(); i++) {
            if(a[c[i]]==1) {
                cout << "NO" << endl;
                goto end;
            }
            else {
                if( a[c[i]-1]==1 || a[c[i]+1]==1) {
                           flag++;
                           a[c[i]]=1;
                }
            }
        }
        
        if(flag == c.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        end:;
    }
    return 0;
}