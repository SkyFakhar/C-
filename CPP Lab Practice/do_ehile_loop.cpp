#include <iostream>
using namespace std;
int main()
{
	
	int x=2, y=1;
do
	{
	
	do
	{
		cout<<x<<" x "<< y<<" = "<<x*y<<endl;
		y++;
	}
	while (y<=10);
	cout<<"**********************************************"<<endl;
	x++;
	y=1;
	}
		while(x<10);
}

