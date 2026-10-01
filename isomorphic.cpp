#include <iostream>
using namespace std;

bool isomorphic(string s, string t) {
    for(int i = 0; i < s.length(); i++) {
        if(s.find(s[i]) != t.find(t[i]))
            return false;
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << (isomorphic(s, t) ? "true" : "false");

    return 0;
}