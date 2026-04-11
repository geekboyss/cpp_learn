#include <iostream>

using namespace std;

int max(int x, int y) {
    if (x > y)
        return x;

    return y;
}

int fact(int n) {
    if (n <= 1)
        return 1;

    return n * fact(n - 1);
}

int main() {
    int x, y, n;
    cin >> x >> y;

    cout << max(x, y) << endl;

    cin >> n;

    cout << fact(n) << endl;

    return 0;
}
