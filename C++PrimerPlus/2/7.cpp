#include <iostream>

int stonetolb(int sts);

int main(void)
{
    using namespace std;
    
    cout << "Enter the weight in stone: ";
    int stone;
    cin >> stone;

    int pounds = stonetolb(stone);
    cout << stone << " stone = " << pounds << " pounds" << endl;

    return 0;
}

int stonetolb(int sts)
{
    int pounds = 14 * sts;
    return pounds;
}
