#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    int choice;
     cout << "Enter first number.\n";
     cin >> a;
     cout << "Enter second number.\n";
     cin >> b;
    
     cout << "Select your choice of operation.\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION/MODULUS\n";
     cin >> choice;

     switch(choice)
     {
        case 1: c=a+b;
        cout << "output is " << c;
        break;
        case 2: c=a-b;
        cout << c;
        break;
        case 3: c=a*b;
        cout << c;
        break;
        case 4: c=a/b;
        cout << c;
        break;
        default:cout << "INVALID INPUT";
     }

}