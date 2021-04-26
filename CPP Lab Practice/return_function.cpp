#include<iostream>
using namespace std;

int func(int,int);
//function declaration

main()
{

	int x,y;
	cout<<" Enter 2 numbers"<<endl;
	cin>>x>>y;
	func(x,y);
//	x, y are arguments here

cout<<"their sum + 5 is = "<< func(x,y)+5;
	
}
int func(int a, int b)
{
//	function defination
//	a and b are parameters HERE

int x= a+b;
return x;

	
}
