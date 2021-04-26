#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int star;
	cout<<"How many stars you want to print : ";
	cin>>star;
	switch (star)
	{
		case 1:
			cout<<"*";
		break;
		case 2:
			cout<<"**";
		break;
		case 3:
			cout<<"***";
		break;
		case 4:
			cout<<"****";
		break;
		case 5:
			cout<<"*****";
		break;
		case 6:
			cout<<"******";
		break;
		case 7:
			cout<<"*******";
		break;
		default:
			cout<<"Invalid Input";
		
	}
	getch();
}
