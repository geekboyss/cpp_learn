#include <iostream>
#include <set>

using namespace std;

int main (int argc, char *argv[]) {
    
    multiset<int> ms;
    ms.insert(5);
    ms.insert(1);
    ms.insert(5);
    ms.insert(3);
    ms.insert(5);
    
    cout << "multiset element : ";
    for (int x : ms) 
        cout << x << " ";
    cout << endl;
    
    cout << "count element 5 = " << ms.count(5) << endl;

    ms.erase(5);

    cout << "delete 5 later ";
    for (int x : ms) 
        cout << x << " ";
    cout << endl;
    
    return 0;
}
