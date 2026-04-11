#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
using namespace std;

int main (int argc, char *argv[]) {
    vector<int> a = {1, 2 ,3 ,4 ,5};

    //random_shuffle(a.begin(), a.end());

    random_device rd;
    mt19937 g(rd());

    shuffle(a.begin(), a.end(), g);

    cout << "shuffle: ";
    for (int x : a)
        cout << x;
    cout << endl;


    return 0;
}
