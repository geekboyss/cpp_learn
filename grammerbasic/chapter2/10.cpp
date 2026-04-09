#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    if (a > 5) {
        printf("%d is big!\n", a);
        printf("%d + 1 = %d\n", a, a + 1);
    } else {
        printf("%d is small!\n", a);
        printf("%d - 1 = %d\n", a, a - 1);
    }
    return 0;
}
