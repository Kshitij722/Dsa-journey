#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> b;
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    int one,two,three,four;
    one = b[1];
    two = b[2];
    three = b[3];
    four = b[4];
    if(one==three){
        int r = one;
        if(two%2==0){
            r+=two/2;
        }
        else{
            r+=(two-1)/2;
            r+=1;
        }

        r+=four;
        cout<<r<<endl;
    }
    else{
        if(one>three){
            int m = three;
            int h = one - three;
            if(h%2==0){
                if(two%2==0){
                    m+=two/2;
                    if(h%4==0){
                        m+=h/4;
                    }
                    else{
                        m+=h/4 + 1;
                    }
                    m+=four;
                    cout<<m<<endl;
                }
                else{
                    m+=(two-1)/2;
                    int k = h - 2;
                    if(k%4==0){
                        m+=1 + k/4;
                    }
                    else{
                        m+=k/4 + 2;
                    }
                   m+=four;
                   cout<<m<<endl;
                }
            }
            else{
                if(two%2==0){
                    m+=two/2;
                    m+=four;
                    m+=(h/4)+1;
                    cout<<m<<endl;
                }
                else{
                    m+=(two-1)/2;
                    m+=four;
                    if(h>1){
                        int k = h - 2;
                         if(k%4==0){
                        m+=1 + k/4;
                    }
                    else{
                        m+=k/4 + 2;
                    }
                    }
                    else{
                        m+=1;
                    }
                    cout<<m<<endl;
                }
            }

        }
        if(three > one){
            int j = one;
            int h = three - one;
            if(two%2==0){
                j+=two/2;
                j+=h;
                j+=four;
                cout<<j<<endl;
            }
            else{
                j+=(two-1)/2;
                j+=1;
                j+=h;
                j+=four;
                cout<<j<<endl;
            }
            
        }
    }
   

}