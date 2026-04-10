#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    for (int i = 0, j = 10; i < j; i++, j--) {
        sum += i * j;
    }
    cout << sum << endl;

    return 0;
}
