#include <iostream>
#include <string>

using namespace std;

bool checkPasscode(const string& passcode, const string& encoded) {
    string decoded;
    for (char c : encoded) {
        if (c >= 'A' && c <= 'J') decoded += to_string(c - 'A');
        else if (c >= 'K' && c <= 'T') decoded += to_string(c - 'K');
    }
    return decoded == passcode;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string passcode, encoded;
        cin >> passcode >> encoded;
        if (checkPasscode(passcode, encoded)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
