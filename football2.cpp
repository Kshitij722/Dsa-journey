#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++){
             if(s[i]=='1' && s[i+1]=='1' &&  s[i+2]=='1' && s[i+3]=='1' &&  s[i+4]=='1'&&  s[i+5]=='1' && s[i+6]=='1' ){
                cout<<"YES";
                goto end;
             }
             if(s[i]=='0' && s[i+1]=='0' &&  s[i+2]=='0' && s[i+3]=='0' &&  s[i+4]=='0'&&  s[i+5]=='0' && s[i+6]=='0'){
                cout<<"YES";
               goto end;
             }
    }
    cout<<"NO";
    end:;
    
}