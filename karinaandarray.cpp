#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
       
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         sort(a,a+n);
        //  for (int i = 0; i < n; i++)
        //  {
        //     cout<<a[i]<<endl;
        //  }
        
         long long e = a[n-1] * a[n-2];
         long long f = a[0] * a[1];
        if(e>f){
            cout<<e<<endl;
        }
        else{
            cout<<f<<endl;
        }
         
        
    }
    return 0;
}

