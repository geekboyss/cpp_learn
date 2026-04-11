#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
    int a = 6;  // 0110
    int b = 10; // 1010
    
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl; //1001
    cout << (a << 1) << endl;
    cout << (b >> 1) << endl;
    

    return 0;
}
