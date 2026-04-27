#include <iostream>

using namespace std;

double convent(double Celsius)
{
    return Celsius * 1.8 + 32;
}

int main()
{
    cout << "Please enter a Celsius value: ";
    int celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convent(celsius) << " degrees Fahrenheit" << endl;

    return 0;
}
