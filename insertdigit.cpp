#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n ; 
        char d;
        cin>>n>>d;
        string a;
        cin>>a;
        // char d1 = itoa(d);
         string h;
        for(int i=0;i<a.length();i++){
            if(a[i]<d){
               h = h+(d);
               h=h+a.substr(i,n-i);
               goto end;
            }
            else{
                h= h+a[i];
            }
        }
        h+=d;
        end:;
        cout<<h;
        cout<<endl;
        
    }
    return 0;
}