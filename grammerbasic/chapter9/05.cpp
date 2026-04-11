#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;


int main (int argc, char *argv[]) {
    vector<int> a = {5, 3, 5, 2, 3, 3, 2, 1};

    sort(a.begin(), a.end());
    
    int m = unique(a.begin(), a.end()) - a.begin();

    cout << "unique later: ";
    for (int i = 0; i < m; i++) 
        cout << a[i] << " ";
    cout << endl;

    
    return 0;
}
