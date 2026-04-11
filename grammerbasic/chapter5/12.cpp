#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "hello world";

    for (int i = 0; i < s.size(); i++)
        cout << s[i] << endl;

    cout << "---------" << endl;

    for (char c : s)
        cout << c << endl;
    for (char &c : s)
        c = 'a';

    cout << s << endl;
    return 0;
}
