#include <iostream>
using namespace std;
main()
{

	int i=0 , sum=0;

	int x[5] = {43, 65, 78, 98, 88,};


	for (int i = 0; i< 5; i++)
	{
	cout<<"the array ["<<i<<"] values are = " << x[i] << endl;
	}
	while(i < 5)
	{
	
		sum = sum+x[i]; 
		i++;
		
	}
	cout<<"the sum of the array"<< "="<< sum <<endl;
}
	
