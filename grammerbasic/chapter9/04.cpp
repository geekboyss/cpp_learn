#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
    
    vector<int> a = {1, 2, 3,4, 5};
    reverse(a.begin(), a.end());

    cout << "reverse vector: ";
    for (int x : a)
        cout << x << " ";
    cout << endl;

    int b[6] = {0, 1, 2, 3, 4, 5};
    reverse(b + 1, b + 1 + 5);

    cout << "reverse array: ";
    for (int i = 1; i <= 5; i++) 
        cout << b[i] << " ";
    cout << endl;
    
    return 0;
}
