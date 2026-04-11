#include <iostream>
#include <system_error>

using namespace std;

int f1(int x) {
    x = 5;
    return x;
}

int f2(int &x) {
    x = 5;
    return x;
}

int main() {
    int x = 10;

    // f1(x);
    f2(x);

    cout << x << endl;
    return 0;
}
