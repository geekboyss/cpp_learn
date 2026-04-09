#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if (a > b)
        printf("%d > %d\n", a, b);
    if (a >= b)
        printf("%d >= %d\n", a, b);
    if (a < b)
        printf("%d < %d\n", a, b);
    if (a <= b)
        printf("%d <= %d\n", a, b);
    if (a == b)
        printf("%d == %d\n", a, b);
    if (a != b)
        printf("%d != %d\n", a, b);

    return 0;
}
