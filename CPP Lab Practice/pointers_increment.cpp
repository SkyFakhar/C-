#include <iostream>
using namespace std;

main()
{
	int x = 1;
	// int *ptr = &x;   *ptr means pointing to tha value at that address
	// if * is not used it points to the address only
	int *ptr;
	ptr = &x;
	
	cout<<"\n\n &x = "<<&x;
	cout<<"\n\n ptr = "<<ptr;
	
	cout<<"\n\n *ptr = "<<*ptr;
	
	cout<<"\n\n *++ptr = "<<++*ptr;
	
	cout<<"\n\n *ptr++ = "<<*ptr++; // because ptr is 1st displayed then incremented
	
	cout<<"\n\n &ptr = "<<&ptr;
	
	cout<<"\n\n *ptr++ = "<<*ptr;









}
