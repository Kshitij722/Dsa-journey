#include <bits/stdc++.h>
using namespace std;

int main()
{
     int r , c;
     cin>>r>>c;
    char s[1000];
     for(int i=0;i<r;i++){
        cin>>s;
        for(int j=0;j<c;j++){
             if(s[j]=='.'){
                if((i+j)%2==1){
                    s[j]='W';
                }
                else{
                    s[j]='B';
                }
             }
        }
        cout<<s<<endl;
     }

}