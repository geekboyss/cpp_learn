#include <iostream>

using namespace std;

int main() {

    int a = 10;

    int *p1 = &a;
    *p1 += 5;
    cout << *p1 << endl;

    int &p2 = a;
    p2 += 5;
    cout << p2 << endl;
    
    
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0;i < 5; i++)
        cout << *(arr + i) << endl;

    return 0;

}
