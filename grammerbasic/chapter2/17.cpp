#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;

    if (s >= 85)
        cout << 'A' << endl;
    else if (s >= 70)
        cout << 'B' << endl;
    else if (s >= 60)
        cout << 'C' << endl;
    else
        cout << 'D' << endl;

    return 0;
}
