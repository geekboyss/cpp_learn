#include <iostream>
#include <queue>
#include <vector>


using namespace std;

int main() {
    priority_queue<int, vector<int>,greater<int>> pq;
    
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
