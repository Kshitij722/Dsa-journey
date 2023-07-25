#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s1;
    getline(cin,s);
    getline(cin,s1);
    s.erase(remove_if(s.begin(), s.end(), [](char c) { return isspace(c); }), s.end());
    s1.erase(remove_if(s1.begin(), s1.end(), [](char c) { return isspace(c); }), s1.end());
    // cout<<s;
    // cout<<s1;
    map<char,int> a;
    map<char,int> b;
    for(int i=0;i<s.length();i++){
              a[s[i]]++;
    }
    for(int i=0;i<s1.length();i++){
        b[s1[i]]++;
    }
    int c=0;
   for (auto i : b) {
    auto it2 = a.find(i.first);

    if (it2 != a.end() && i.second <= it2->second) {
    //    c++;
    continue;
    } else {
      cout << "NO";
      goto end;
    }
  }
  cout<<"YES";
//   if(c==b.size()){
//     cout<<"YES";
//   }
//   else{
//     cout<<"NO";
//   }
  end:;
    return 0;
}