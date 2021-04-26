#include<iostream>
using namespace std;
main()
{
/*
if a local variable is not defiened i.e not assigned with a value then some random, useless or garbage value is stored in it
a variable defined inside { } can't be used out of { } .
logical and= && 	 0&&0 = 0,		0&&1 =0,	1&&1=1
logical not= ||	 "~"  symbol is used for not
*/
	int sID;
	float sGPA;
	char sResult;
	
	cout<<" enter Student Id=  \n";
	cin>>sID;
	
	
	cout<<" enter Student GPA=  \n";
	cin>>sGPA;
	
	cout<<" enter Student RESULT=  \n";
	cin>>sResult;
	
	cout<< " your Result is =  \n \n \n"<< sResult;
	
	
	//cariage return = \r
	
	cout<< " singa ay ginayyy\r";
	cout<< " kha yam";
}
