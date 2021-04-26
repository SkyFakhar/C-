#include<iostream>
#include<cmath>
using namespace std;

main()
{

int x,y;
char z;
cout<<"enter 1st Number";
cin>>x;

cout<<"enter operand";
cin>>z;

cout<<"enter 2nd Number";
cin>>y;


if (z == "+")
{

	cout<<x<<" + "<<y<< = x+y;

}
else if(z == "-")
	{

	cout<<x<<" - "<<y<< = x-y;

	}

	else if(z == "*")
	{

	cout<<x<<" * "<<y<< = x*y;

	}

	else if(z == "/")
	{

	cout<<x<<" / "<<y<< = x/y;

	}

	else if(z == "%")
	{

	cout<<x<<" % "<<y<< = x%y;

	}

	else if(z == "avg")
	{

	cout<<x<<" average "<<y<< = (x+y)/2;

	}

	else if(z == "&")
	{

	cout<<x<<" & "<<y<< = x&y;

	}

	else if(z == "|")
	{

	cout<<x<<" | "<<y<< = x|y;

	}

	else if(z == "~")
	{

	cout<<x<<" ~ "<<y<< = x~y;

	}
	else
	{
		cout<<"Wrong selection...";
	}


}
