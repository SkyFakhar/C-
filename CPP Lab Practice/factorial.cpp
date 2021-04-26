#include <iostream>
#include <conio.h>
using namespace std;
main() 
{
    int j,k;
    long fact = 1;
    cout<<"Enter an integer: ";
    cin>>j;
    for (k = 1; k <= j; ++k) 
	{
        fact *= k;
    }
    cout<<"Factorial of "<<j<<" is "<<fact;
    getch();
}
