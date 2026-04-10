#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    reverse(arr + k, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    reverse(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    cout << "----------------------" << endl;

    int a[5] = {1, 2, 3, 4, 5};
    reverse(a, a + n - k);
    reverse(a + n - k, a + n);
    reverse(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
