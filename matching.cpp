#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
                c++;
            }
        }
        if(c==0){
            if(s[0]=='0'){
                cout<<0<<endl;
            }else{
            cout<<1<<endl;
            }
        }

        else{
            if(c==s.length()){
                if(c==1){
                    cout<<9<<endl;
                }else{
                cout<<pow(10,c)- pow(10,c-1)<<endl;
                }
            }

            else{
                if(s[0]=='?'){
                    cout<<pow(10,c)-pow(10,c-1)<<endl;
                }
                else{
                    if(s[0]=='0'){
                        cout<<0<<endl;
                    }else{
                    cout<<pow(10,c)<<endl;
                }
                
                }
            }
        }
    }
    return 0;
}