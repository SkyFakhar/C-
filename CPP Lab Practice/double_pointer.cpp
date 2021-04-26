#include <iostream>
using namespace std;

main()
{
	int x = 1;
	
	int *p1 = &x;

	
	int **p2 = &p1;
	
	cout<<"\n\n&x = "<<&x;
	
	cout<<"\n p1 = "<<p1;
	
	cout<<"\n p2 = "<<p2;
	
	cout<<"\n *p2 = "<<*p2;
	
	cout<<"\n **p2 = "<<**p2;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
