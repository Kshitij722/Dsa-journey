#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //Function
    int n,k,x;
    cin>>n>>k>>x;
    int a,b;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
  
    else{
        for(int i=2;i<=k;i++){
            a = n%i;
            if((a>1 && a<=k)){
                cout<<"YES"<<endl;
                cout<<n/i + 1<<endl;
                b = i;
                for(int i=1;i<=n/b;i++){
                    cout<<b<<" ";
                }
                cout<<a<<endl;  
                goto end;
            }
            if(a==0){
                cout<<"YES"<<endl;
                cout<<n/i<<endl;
                b = i;
                for(int i=1;i<=n/b;i++){
                    cout<<b<<" ";
                }  
                cout<<endl;
                goto end;
            }
        }
        cout<<"NO"<<endl;
        end:;
        
    }
}

int main()
{
    //main function
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}