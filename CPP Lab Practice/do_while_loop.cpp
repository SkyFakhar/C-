#include <iostream>
using namespace std;
int main()
{
	int x,y=0;
	cout<<"Enter a number to display the statment";
	cin>>x;
	do
		{
		
		cout<<"this is a while loop"<<endl;
		y+=1;
		if (y== 25)
		{
			break;
		}
	}
		while (y!=x);
}
