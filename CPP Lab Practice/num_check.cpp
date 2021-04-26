#include<iostream>
#include<cmath>

using namespace std;

main()
{

int x;
cout << "ENTER a number = ";
cin>>x;

if( x%5 == 0)
{
	cout<<"\n\nMultiple of 5.\n\n";
}
else{
	cout<<"Not a Multiple of 5.\n\n";
}
 if(x%7 == 0)
{
	cout<<"Divisible of 7.\n\n";
}
else
{
	cout<<"Not a Divisible of 7.\n\n";
}
 if(x%11 == 0)	
{
	cout<<"Divisible of 11.\n\n";

}
else{
	cout<<"Not a Divisible of 11.\n\n";
}

return 0;
}

