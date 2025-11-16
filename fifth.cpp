#include<iostream>
#include<ctime>
int main()
{
    srand(time(NULL));
    
    int num1 = (rand()%6)+1 ; // for 6 faced dice %6.....for 10 faced = %10...likewise
    int num2 = (rand()%6)+1 ;
    int num3 = (rand()%6)+1 ;

    std::cout<< num1 << '\n';
    std::cout<< num2 << '\n';
    std::cout<< num3 << '\n';
}