#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        int k = 1;
        int c=0,h;
        cin>>a>>b;
        if((a%2!=0 && b%2!=0)){
            if(b%a==0 && a!=1){
                    c+=a;
                    c+=(b/a);
            }
            else if(a%b==0 && b!=1){
                c+=b;
                c+=(a/b);
            }
            else{
               h = __gcd(a,b);
               if(h==1){
                if(a==b){
                    c+=2;
                }
                else{
                 c+=3;
                 c+=(a-1)/2;
                 c+=(b-1)/2;
                }
               }
               else{
               c+=h-1;
               c+=a/h;
               c+=b/h;
               }
            }
        }
        else if(a%2==0 && b%2==0){
               if(b%a==0){
                    c+=a;
                    c+=(b/a);
            }
            else if(a%b==0){
                c+=b;
                c+=(a/b);
            }
            else{
                if(a%10==0 && b%10==0){
                    h=10;
                    c+=h-1;
                    c+=a/h;
                    c+=b/h;
                }
                else{
                h = __gcd(a,b);
                c+=h-1;
                c+=a/h;
                c+=b/h;
                }
            }
        }
        else{
            if(a%2!=0 && b%2==0){
               if(b%a==0 && a!=1){
                    c+=a;
                    c+=a-1;
                    c+=b/a;
            }
            else if(b%a!=0){
               h = __gcd(a,b);
               if(h==1){
                 c+=2;
                 c+=(a-1)/2;
                 c+=(b)/2;
               }
               else{
               c+=h-1;
               c+=a/h;
               c+=b/h;
               }
            }
            else{
                c+=a+1;
                c+=b/2;

            }
            }
            if(a%2==0 && b%2!=0){
                if(a%b==0 && b!=1){
                    c+=b;
                    c+=b-1;
                    c+=a/b;
            }
            else if(a%b!=0){
               h = __gcd(a,b);
               if(h==1){
                 c+=2;
                 c+=(a)/2;
                 c+=(b-1)/2;
               }
               else{
               c+=h-1;
               c+=a/h;
               c+=b/h;
               }
            }
            else{
                c+=b+1;
                c+=a/2;
            }
            }
        }
        cout<<c<<endl;

    }
    return 0;
}