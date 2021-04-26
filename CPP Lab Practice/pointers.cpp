#include <iostream>
using namespace std;

main()
{
	int x = 1;
	// int *ptr = &x;   *ptr means pointing to tha value at that address
	// if * is not used it points to the address only
	// * means d-referance
	int *ptr;
	ptr = &x;
	
	cout<<"&x = "<<&x<<endl;
	
	cout<<"ptr points to = "<< ptr<<endl;
	
	cout<<"*ptr points to = "<< *ptr<<endl;
	
	cout<<"\n now *ptr became = "<<*ptr+1;
	
	ptr++;
	cout<<"\n now *ptr became = "<<*ptr;
	
	
	
	cout<<"\n now ptr became = "<<ptr;
	
}
