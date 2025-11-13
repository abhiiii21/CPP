#include <iostream>
using namespace std;
int main()
{
 double temp;
 char unit;

 cout << "F = fahrenheit\n";
 cout << "C = celsius\n";
 cout << "Enter the unit you want to convert the temperature to\n";
 cin >> unit;

 if(unit == 'F' || unit == 'f')
 {
    cout << "Enter temperature in celsius\n";
    cin >> temp;
    temp=(1.8*temp)+32;
    cout << "Temperature in fahrenheit is " << temp << " F";
 }
 else if(unit == 'C' || unit == 'c')
 {
    cout << "Enter temperature in fahrenheit\n";
    cin >> temp;
    temp=(temp - 32)/1.8;
    cout << "Temperature in celsius is " << temp << " C";
 }
 else
 {
    cout << "ENTER VALID INPUT";
 }
}