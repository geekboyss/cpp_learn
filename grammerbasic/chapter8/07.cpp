#include <iostream>
#include <deque>

using namespace std;

int main (int argc, char *argv[]) {
    
    deque <int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    for (int x : dq)
        cout << x << " ";
    cout << endl;

    //随机访问
    cout << "dq[0] = " << dq[0] << endl;
    cout << "dq[2] = " << dq[2] << endl;
    
    cout << "front = " << dq.front() << endl;
    cout << "back = " << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "delete front and back " << endl;

    for (int x : dq)
        cout << x << " ";
    cout << endl;

    cout << "using iterator" << endl;
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "clear dequeu" << endl;
    dq.clear();
    cout << "clear size = " << dq.size() << endl;

    return 0;
}
