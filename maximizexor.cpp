#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    string a,b;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        int c=0;
        for(int i=0;i<a.size();i++){
            if(b[i]=="1"){
                c++;
            }
        }
    }
	return 0;
}
