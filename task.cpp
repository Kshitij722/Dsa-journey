#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    // since 0 and 1 is not prime return false.
    if (n == 1 || n == 0)
        return false;
 
    // Run a loop from 2 to n-1
    for (int i = 2; i < n; i++) {
        // if the number is divisible by i, then n is not a
        // prime number.
        if (n % i == 0)
            return false;
    }
    // otherwise, n is prime number.
    return true;
}
int main()
{
    int t;
    
    cin>>t;
    int k=0;
    while(k!=t){
        long long z;
        cin>>z;
        vector<int> a;
        for(int i=1;i<100;i++){
              if(isPrime(i)){
                a.push_back(i);
              }
        }
        int i=0,ans,flag=0;
        while(flag!=1){
            if(a[i]*a[i+1] > z){
                   flag=1;
            }
            else{
                ans=a[i]*a[i+1];
            }
            i++;
        }
        cout<<"Case #"<<k+1<<": "<<ans<<endl;
        k++;
    }
    return 0;
}