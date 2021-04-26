#include<iostream>
#include<cmath>
using namespace std;

main()
{

int x,y;
string z;
cout<<"Enter 1st Number = ";
cin>>x;

cout<<"\nEnter operand = ";
cin>>z;

cout<<"\n Enter 2nd Number = ";
cin>>y;


if (z == "+")
{

	cout<<x<<" + "<<y<<" = "<< x+y;

}
else if(z == "-")
	{

	cout<<x<<" - "<<y<< " = "<< x-y;

	}

	else if(z == "*")
	{

	cout<<x<<" * "<<y<< " = "<< x*y;

	}

	else if(z == "/")
	{

	cout<<x<<" / "<<y<< " = "<< x/y;

	}

	else if(z == "%")
	{

	cout<<x<<" % "<<y<< " = "<< x%y;

	}

	else if(z == "avg")
	{

	cout<<x<<" average "<<y<< " = "<< (x+y)/2;

	}

	else if(z == "&")
	{

	cout<<x<< "&&" <<y<< " = "<< x&&y;

	}

	else if(z == "|")
	{

	cout<<x<< "||" <<y<< " = "<< x||y;

	}

	else if(z == "~")
	{

	cout<< ~y<< " = "<< ~y;

	}
	else
	{
		cout<<"Wrong selection...";
	}


}

