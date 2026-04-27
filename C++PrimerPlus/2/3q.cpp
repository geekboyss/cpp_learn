#include <iostream>

void simon(int n);

int main()
{
    using namespace std;
    
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);

    cout << "Done!" << endl;

    return 0;
}


void simon(int n)
{
    using namespace std;

    cout << "simon says touch your toes " << n << "times" << endl;
}
