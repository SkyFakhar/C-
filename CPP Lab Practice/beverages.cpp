#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int pers=1,num,b1=0,b2=0,b3=0,b4=0;
	cout<<"\t\t\t\t\t\t Beverages :"<<endl;
	cout<<"\n\n\t\t\t1. Coffee. \t2. Tea. \t3. Coke. \t4. Orange juice.";
	while(pers!=0)
	{
		cout<<"\n\nPlease input the favorite beverage of person #"<<pers<<": Choose 1, 2, 3 or 4 from above menu or -1 to exit the program  ";
		cin>>num;
		switch(num)
		{
			case 1:
				b1++;
			break;
			case 2:
				b2++;
			break;
			case 3:
				b3++;
			break;
			case 4:
				b4++;
			break;
			case -1:
				cout<<"total Number of people surveyed is "<<pers<< ". The results are as follows:"<<endl;
		  	break;
		  	default:
		  		cout<<"Wrong Entry";
		}
	
		pers++;
	}
	cout<<"h";
	getch();
}
