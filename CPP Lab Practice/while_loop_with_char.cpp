#include <iostream>
using namespace std;
int main()
{
	int x=2;
	char ch='t';

while(ch=='t')
{
	for (int y=0; y<=25; y+=5)
	{
		cout<<x<<" x "<< y<<" = "<<x*y<<endl;
	}

	cout<<" Enter a Character to terminate the statment"<<endl;
	cin>>ch;
}

}

