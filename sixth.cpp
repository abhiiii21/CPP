#include<iostream>
#include<ctime>
int main()
{
    srand(time(0));
    
    int num = (rand()%5)+1 ; // this will give us random numbers between 1 and 5

    switch(num)
    {
        case 1: std::cout<<"you win a lottery ticket";
        break;
        case 2: std::cout<<"you win a free lunch";
        break;
        case 3: std::cout<<"you win a gift card";
        break;
        case 4: std::cout<<"you win a concert ticket";
        break;
        case 5: std::cout<<"you win a smartwatch";
        break;
    }
    
}