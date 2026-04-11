#include <string>
#include <map>
#include <iostream>
using namespace std;


int main (int argc, char *argv[]) {
    
    map<string, int> h;

    h.insert({"apple", 5});
    h.insert({"banana", 3});
    h.insert({"orange", 7});

    // 不会插入
    h.insert({"apple", 10});
    
    h["pear"] = 6;
    h["banana"] = 10;

    cout << "---------" << endl;
    for (auto &p : h) {
        cout << p.first << " -> " << p.second << endl;
    }
   
    // find 
    auto it = h.find("orange");
    if (it != h.end()) {
        cout << "find ornage.value = " << it->second << endl;
    } else {
        cout << "not find" << endl;
    }


    cout << "---------" << endl;
    h.erase("banana");
    for (auto &p : h) {
        cout << p.first << " -> " << p.second << endl;
    }
    
    cout << "---------" << endl;
    cout << "show not key: " << h["grape"] << endl;
    for (auto &p : h) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
