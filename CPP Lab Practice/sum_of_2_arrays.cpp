#include<iostream>
using namespace std;
main()
{
	int x[5],y[5],sum=0;
	
	for(int i = 1; i <= 5; i++)
	{
		cout<<"Enter the number"<<i<<" for First array = ";
		cin>>x[i];
		
	}
	cout<<"********************************************""\n\n";
	
		for(int i = 1; i <= 5; i++)
	{
	cout<<"Enter number "<<i<<" for Second array = ";
		cin>>y[i];
		
	}
	cout<<"********************************************""\n\n";
	
	for(int i = 1; i <= 5; i++)
	{
		sum=x[i] + y[i];
		cout<<"The sum of "<<x[i] <<"+"<< y[i]<<" is "<<sum<<endl;
	}
}
