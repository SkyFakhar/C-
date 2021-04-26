#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int num1, num2, sum = 0;
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;

	while (num1 <= num2)
		{
			if(num1%2 == 0)
				sum += num1; 
			num1++;
		}
	cout << "The sum of all even numbers between " << num1 << " and " << num2 << " is " << sum << "." << endl;
	getch();
}
