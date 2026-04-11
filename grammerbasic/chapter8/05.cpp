#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int, int>> pq;

    pq.push({3, 100});
    pq.push({1, 200});
    pq.push({5, 300});
    pq.push({2, 400});

    cout << "top = (" << pq.top().first << ", " << pq.top().second << ")" << endl;

    while (!pq.empty()) {
        auto p = pq.top();
        cout << "(" << p.first << ", " << p.second << ") ";
        pq.pop();
    }

    cout << endl;
    return 0;
}

