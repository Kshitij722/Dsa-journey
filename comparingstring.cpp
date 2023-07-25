#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int n = a.length();
    int m = b.length();
//     if(m==n){
//    map<char,int> d;
//    map<char,int> c;
//    for(int i=0;i<n;i++){
//       d[a[i]]++;
//    }
//    for(int i=0;i<m;i++){
//            c[b[i]]++;
//    }
//    for(auto i : d ){
//     auto it = c.find(i.first);
//     if(it != c.end() && i.second != it->second ){
//                   cout<<"NO";
//                   goto end;      
//     }
//     if(it==c.end()){
//         cout<<"NO";
//         goto end;
//     }

//     }

//    cout<<"YES";
//    end:;
//     }
//     else{
//         cout<<"NO"; 
//     }
  
    int i = 0;
    if(a.length()!=b.length()){
      cout<<"NO";
      return 0;
    }
    int j;
    int k;
    vector<int>ans;
    while(i < a.length()){
      if(a[i] != b[i]){
        ans.push_back(i);
      }
      i++;
    }
    if(ans.size()>2 || ans.size() < 2){
      cout<<"NO";
      return 0;
    }
    if(a[ans[0]] == b[ans[1]] && b[ans[0]] == a[ans[1]]){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    return 0;
}