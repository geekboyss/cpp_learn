#include <iostream>

using namespace std;

void print(int a[]) {
    for (int i = 0; i < 10; i++)
        cout << a[i] << endl;
}

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = i;

    print(a);

    return 0;
}
