#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1, s2 = "abc";

    cout << s1.empty() << endl;
    cout << s2.empty() << endl;

    cout << s2.size() << endl;

    string s3(10, 'c'), s4;
    cout << s3 << "---" << s4 << endl;
    s3 = s4;
    cout << s3 << "---" << s4 << endl;

    string s5 = "hello", s6 = "world\n";
    string s7 = s5 + ", " + s6;
    cout << s7 << endl;

    return 0;
}
