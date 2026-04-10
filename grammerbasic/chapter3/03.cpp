#include <cstdio>
#include <iostream>

using namespace std;

/*
 *  1   a = 1 b = 1
 *  2   a = 1 b = 2
 *  3   a = 2 b = 3
 */

int main() {

    int n;
    cin >> n;
    int a = 1, b = 1, i = 1;

    while (i < n) {
        int c = a + b;
        a = b;
        b = c;
        i++;
    }

    cout << a << endl;

    return 0;
}
