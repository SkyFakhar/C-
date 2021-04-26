#include <iostream>
using namespace std;

main()
{
	int x = 1;
	
	const int *p = &x;
	
	int y = *p;	//reading is allowed only
	
//	*p+=5;	writting or editting is not allowed
	
	cout<<" constant p = "<<p;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
