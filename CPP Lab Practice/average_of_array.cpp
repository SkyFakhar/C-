#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float x[10];
	float avg,sum=0;
	
	for(int i=1; i<=10; i++)
	{
		cout<<"Enter number " << i <<" = ";
		cin>>x[i];
		cout<<endl;
		sum=sum + x[i];
	}
	
	avg=sum/10;
	cout<<" Average of ten numbers is = "<<avg;
	getch();
}
