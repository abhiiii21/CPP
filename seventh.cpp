#include<iostream>
#include<ctime>
using namespace std;
int main()
{   
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    
    num = (rand()%100)+1 ;

    cout<<"******NUMBER GUESSING GAME******\n";

    do{
       cout<<"Enter a number between 1 and 100\n";
       cin >> guess ;
       tries++;
       if(guess>num)
       {
        cout<<"too high!\n";
       }
       else if(guess<num)
       {
        cout<<"too low!\n";
       }
       else{
        cout<<"CORRECT!!  no. of tries: " << tries;
       }
      }while(guess != num);
}