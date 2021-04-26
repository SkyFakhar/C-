#include<iostream>
using namespace std;

main()
{
	float x,y;
	cout<<"Enter Temperature in Faranhite = \n";
	cin>>x;
	cout<<"\n\n";
	
	cout<<"Temperature in Celsius =  "<< (x-32)/1.8;
	cout<<"\n";
	
	cout<<"Temperature in Kelvin =  "<<((x-32)/1.8)+273;
	
}
