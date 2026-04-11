#include <iostream>
#include <queue>

using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(7);

    cout << "top = " << pq.top() << endl;

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
