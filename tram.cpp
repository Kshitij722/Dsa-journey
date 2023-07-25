#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int inside =0;
    int no=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        inside-=a;
        inside+=b;
        no = max(inside,no);
    }
    cout<<no;
    return 0;
}