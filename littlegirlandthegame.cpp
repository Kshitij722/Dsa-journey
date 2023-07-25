#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> a;
    int total;
    int count=0;
    // for (int i=0;i<s.length();i++){
    //     a[s[i]-'a']++;
    // }
    // for(int i=0;i<s.length();i++){
    //     cout<<a[i];
    // }
    for(int i=0;i<s.length();i++){
        a[s[i]]++;
    }
    for(auto i : a){
        if(i.second % 2 == 1){
            count++;
        }
    }
    if(count==0){
        cout<<"First";
        return 0;
    }
    if(count==1){
        cout<<"First";
        return 0;
    }
    if(count % 2 ==0){
        cout<<"Second";
        return 0;
    }
    cout<<"First";
    return 0;



} 