#include<iostream>
using namespace std;
main()
{

int n;
cout<<"Enter a number";
cin>>n;

if (n>0)
{

		if(n%2==0)
		{

	cout<<"Number is even and greater then zero \n\n";
		}

		else
		{
	cout<<"Number is odd and greater then zero \n\n";

		}
		}
		else if (n<0)
		{


				if (n%2==0)
				{
					cout<<"Number is even and smaller then zero \n\n";
				}

				else
				{

			cout<<"Number is odd and smaller then zero \n\n";
				}
		}
else		{
				cout<<"Number is zero \n\n";
			}
	}



