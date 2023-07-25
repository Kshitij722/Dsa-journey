#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[3];
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		if(abs(a[0]-a[1])%2==1 || abs(a[0]-a[2])%2==1 || abs(a[1]-a[2])%2==1){
			cout<<"-1"<<endl;
		}
		else{
			sort(a,a+3);
			int avg=(a[1]+a[2])/2;
			cout<<avg-a[0]<<endl;
		}
	}
	return 0;

}