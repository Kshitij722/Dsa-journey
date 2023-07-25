#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[i+(n/2)]){
            cout<<"NO"<<endl;
            goto end;
        }
       
    }
    cout<<"YES"<<endl;
    end:;
       
    }
}