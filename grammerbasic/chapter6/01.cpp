#include <iostream>
#include <string>

using namespace std;

int fact(int val) {
    int ret = 1;
    while (val > 1)
        ret *= val--;

    return ret;
}

int main() {

    int j = fact(3);
    cout << "3! is :" << j << endl;

    return 0;
}
