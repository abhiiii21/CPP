#include <iostream>
using namespace std;
int main ()
{
    int rows,columns;
    char symbol;
    
    cout << "Enter number of rows you want\n";
    cin >> rows;
    cout << "Enter number of columns you want\n";
    cin >> columns;
    cout << "Enter the symbol you want to print\n";
    cin >> symbol;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout << symbol << " ";
        }
        cout << "\n";
    }
    return 0;
}