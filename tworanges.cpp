#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,w=0;
	    vector<int> s;
	    cin>>a>>b>>c>>d;
	    for(int i=a;i<=b;i++){
	        
	            s.push_back(i);
	        
	    }
		for(int i=c;i<=d;i++){
	       s.push_back(i);
	    }
		
		sort(s.begin(),s.end(),greater<int>());
		for(int i=0;i<s.size();i++){
			if(s[i]==s[i+1]){
				w++;
			}
		}
		cout<<s.size()- w<<endl;
	}
	return 0;
}
