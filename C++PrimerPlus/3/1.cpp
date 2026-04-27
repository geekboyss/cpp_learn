#include <iostream>
#include <climits>

int main (int argc, char *argv[]) {
    
    using namespace std;
    
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes" << endl;
    cout << "short is " << sizeof n_short << " bytes" << endl;
    cout << "long is " << sizeof n_long << " bytes" << endl;
    cout << "n_llong is " << sizeof n_llong << " bytes" << endl;
    cout << "----------" << endl; 
    cout << "int: " << n_int << endl; 
    cout << "short: " << n_short << endl; 
    cout << "long: " << n_long << endl; 
    cout << "llong: " << n_llong << endl; 
    
    return 0;
}
