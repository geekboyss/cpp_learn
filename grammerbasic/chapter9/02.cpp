#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    
    int x = 42; // 101010
    
    for (int k = 0; k < 6; k++) {
        cout << "x " << k << " bit = " <<((x >> k) & 1) << endl;
    }
    
    cout << "----------" << endl;

    int y = 12; // 1100 & 0100

    cout << "y = " << y << endl;
    cout << "lowbit(x) = " << (y & -y) << endl;

    return 0;
}
