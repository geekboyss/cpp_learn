#include <iostream>

using namespace std;

double light(double year)
{
    return year * 63240;
}

int main()
{
    double years;
    cout << "Enter the number of light years: ";
    cin >> years;
    
    cout << years << " light years = " << light(years) << " astronomical units" << endl;


    return 0;
}
