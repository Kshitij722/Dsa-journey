#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> a;
    for (int i = 0; i < s.length(); i++) {
        a.push_back(s[i] - '0');
    }
    // for(auto i=a.begin();i!=a.end();i++){
    //     cout<<*i;
    // }
    int b = 0, c = 0, d = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            if (a[i] == 1 && a[i+1] != 4 ) {
                b++;
                
            } else if (a[i] == 1 && a[i+1] == 4 && a[i+2] == 4) {
                c += 3;
                i += 2;
            } else if (a[i] == 1 && a[i+1] == 4 && a[i+2] != 4) {
                d += 2;
                i += 1;
            }
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    if (b + c + d == a.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
 }