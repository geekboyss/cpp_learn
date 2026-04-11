#include <iostream>
#include <set>
using namespace std;

int main (int argc, char *argv[]) {
    
    // ==== 1.set ====
    set <int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5);
    
    for (int x : s)
        cout << x << " ";
    cout << endl;

    auto it = s.find(3);
    if (it != s.end())
        cout << "find 3" << endl;
    else
        cout << "not find" << endl;

    cout << "lower_bound(3) = " << *s.lower_bound(3) << endl;
    cout << "upper_bound(3) = " << *s.upper_bound(3) << endl;

    // delete element
    s.erase(3);
    
    cout << "delete 3 late" << endl; 
    for (int x : s)
        cout << x << " ";
    cout << endl;

    auto it2 = --s.end();
    cout << "max element is " << *it2 << endl;
    
    s.erase(it2);
    cout << "delete max late" << endl; 
    for (int x : s)
        cout << x << " ";
    cout << endl;

    

    return 0;
}
