#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char a[100] = "hello wordl!", b[100];
    cout << strlen(a) << endl;
    strcpy(b, a);
    cout << strcmp(a, b) << endl;

    return 0;
}
