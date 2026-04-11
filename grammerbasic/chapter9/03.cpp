#include <iostream>
using namespace std;


int main (int argc, char *argv[]) {
    int x = 42;

    int cnt = 0;
    int t = x;

    while (t) {
        t -= t & -t;
        cnt++;
    }

    cout << "count t: " << cnt << endl;

    return 0;
}
