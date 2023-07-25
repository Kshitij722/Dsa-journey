#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long a[n];
         long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
       
        for(int i=1;i<n;i++){
             a[i]+=a[i-1];
        }
        while(q--){
            long long k;
            int l,r;
            cin>>l>>r>>k;
            int sum;
            if(l-2 >=0){
                long long sum1 = a[r-1] - a[l-2];
                 sum = a[n-1] - sum1;
            }else{
                 sum = a[n-1] - a[r-1];
            }
            int sol = sum + ((r - l + 1) * k);
            if((sol)%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}