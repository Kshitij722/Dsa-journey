#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    long long count = -1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='E' && sx < ex){
            sx++;
        }
        if(s[i]=='W' && sx > ex){
            sx--;
        }
        if(s[i]=='N' && sy < ey){
            sy++;
        }
        if(s[i]=='S' && sy > ey){
            sy--;
        }
        if(sx == ex && sy == ey){
            count = i+1;
            break;
        }
    }
    cout<<count;

    

    return 0;
}