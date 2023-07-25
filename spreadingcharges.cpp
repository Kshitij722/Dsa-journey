#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        int n,c=0,count=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                count++;
            }
            if(s[i]=='-'){
                c++;
            }
        }
        if(count+c==s.length()){
            cout<<"0"<<endl;
        }
        if((count==s.length() && c!=s.length())|| (count!=s.length() && c==s.length())){
            cout<<"0"<<endl;
        }
        if((count!=0 && c==0) || (count==0 && c!=0)){
            cout<<"0"<<endl;
        }
        if(count==0 && c==0){
            cout<<s.length()<<endl;
        }
        
    }
	return 0;
}
