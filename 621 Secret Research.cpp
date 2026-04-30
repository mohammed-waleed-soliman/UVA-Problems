#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "1" || s == "4" || s == "78") cout << "+" << endl;
        else if (s.size() >= 2 && s.substr(s.size() - 2) == "35") cout << "-" << endl;
        else if (s.size() >= 2 && s.front() == '9' && s.back() == '4') cout << "*" << endl;
        else if (s.size() >= 3 && s.substr(0, 3) == "190") cout << "?" << endl;
    }
    return 0;
}
