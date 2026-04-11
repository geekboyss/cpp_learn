#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
    return a < b;
}

struct rec {
    int id, x, y;

    bool operator<(const rec& b) const {
        return x < b.x || (x == b.x && y < b.y);
    }
};

int main (int argc, char *argv[]) {
    int a[6] = {0, 3, 1, 5, 4, 2};

    sort(a + 1, a + 1 + 5, cmp);

    cout << "sort: ";
    for (int i = 1; i <= 5; i++)
        cout << a[i] << " ";
    cout << endl;
    
    cout << "-------------" << endl;
    
    vector<rec> b = {{1,3,5}, {2,1,7}, {3,3,2}, {4,2,9}};

    sort(b.begin(), b.end());
    for (auto &p : b) {
        cout << "id=" << p.id << " x=" << p.x << " y=" << p.y << endl;
    }


    return 0;
}
