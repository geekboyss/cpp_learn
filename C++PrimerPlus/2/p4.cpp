#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int month = age * 12;
    cout  << "You have " << month << " month" << endl; 

    return 0;
}
