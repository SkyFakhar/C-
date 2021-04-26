#include<iostream>
#include<cmath>
using namespace std;

main()
{

int x,y;
char z;
cout<<"enter 1st Number = ";
cin>>x;

cout<<"enter operand= ";
cin>>z;

cout<<"enter 2nd Number = ";
    cin>>y;

if (z == '+')
{

	cout<<x<<" + "<<y<< " = \n\n" << x+y;

}
else if(z == '-')
	{

	cout<<x<<" - "<<y<< " = \n\n"<< x-y;

	}

	else if(z == '*')
	{

	cout<<x<<" * "<<y<< " = \n\n"<< x*y;

	}

	else if(z == '/')
	{

	cout<<x<<" / "<<y<< " = \n\n" << x/y;

	}

	else if(z == '%')
	{

	cout<<x<<" % "<<y<< " = \n\n"<< x%y;

	}

	else if(z == 'a')
	{

	cout<<x<<" average "<<y<< " = \n\n"<< (x+y)/2;

	}
/*
	else if(z == '&')
	{

	cout<<x <<"&" <<y<< " = "<< x&y;

	}

	else if(z == '|')
	{

	cout<<x<< "|" <<y<< " = "<< x|y;

	}

	else if(z == '~')
	{

	cout<<" ~ "<<y<< " = "<< ~y;
	cout<<" ~ "<<x<< " = "<< ~x;

	}
	*/
	else
	{
		cout<<"Wrong selection...";
	}


	return 0;


}

