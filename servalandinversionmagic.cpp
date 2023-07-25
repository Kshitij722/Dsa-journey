#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n,c1=0,p1=0,c2=0,p2=0;
    string s;
    cin>>s;
    string b=s[::-1];
    if(b==s){
        cout<<"YES"<<endl;
    }
    else{
        if(s.lenght()%2!=0){
        for(int i=0;i<(s.lenght()+1)/2;i++){
            if(s[i]=='0'){
                c1++;
            }
            if(s[i]=='1'){
                p1++;
            }
        }
        for(int i=((s.lenght()+1)/2)+1;i<s.lenght();i++){
            if(s[i]=='0'){
                 c2++;
            }
            if(s[i]=='1'){
                p2++;
            }
        }
        if(c1==c2)
        }
    }
 }

    return 0;
}