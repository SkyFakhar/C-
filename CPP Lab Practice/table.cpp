#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int num1,num2;
	cout<<"Please enter the number of which you to to print a table : ";
	cin>>num1;
	for(num2=1;num2<=10;num2++)
	{
		cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
	}
	getch();
	
}
