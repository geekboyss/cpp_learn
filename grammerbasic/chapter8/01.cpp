#include <iostream>
#include <string>
#include <vector> 

using namespace std;

struct people {
    int age;
    string name;
};

int main() {

    vector<int> a = {10, 20, 30, 40, 50};
    vector<int> b[233];
    vector<people> c;

    cout << a.size() << "__" << a.empty() << endl;
    
    vector<int>::iterator it1 = a.begin();
    cout << *it1 << endl;
    cout << *(it1 + 1) << endl;
    
    vector<int>::iterator it2 = a.begin() + 3;
    cout << it2 - it1 << endl;
    
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;
    
    cout << "--------" << endl;

    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
        cout << *it << ' ';
    cout << endl;

    cout << "--------" << endl; 

    cout << a.front() << "____" << a.back() << endl;

    a.push_back(66);
    a.push_back(99);
    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
        cout << *it << ' ';
    cout << endl;

    a.pop_back();
    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
        cout << *it << ' ';
    cout << endl;
    
    return 0;
}
