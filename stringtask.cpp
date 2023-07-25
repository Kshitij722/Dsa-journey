#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<char> d = {'a', 'e', 'i', 'o', 'u', 'y'};
    vector<char> a;
    for (char i : s) {
        if (find(d.begin(), d.end(), tolower(i)) == d.end()) {
            a.push_back('.');
            a.push_back(tolower(i));
        }
    }
    for (char i : a) {
        cout << i;
    }
    return 0;
}