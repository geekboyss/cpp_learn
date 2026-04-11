#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
    
    int a[6] = {0, 1, 3, 3, 5, 7};
    int x = 3;

    int pos = lower_bound(a + 1, a + 1 + 5, x) - a;

    cout << "first >= " << x << " pos is " << pos << endl;
    

    vector<int> b = {1, 3, 3, 5, 7};
    int y = 4;

    int z = *--upper_bound(b.begin(), b.end(), y);
    
    cout << "<= " << y << " num = " << z << endl;

    return 0;
}
