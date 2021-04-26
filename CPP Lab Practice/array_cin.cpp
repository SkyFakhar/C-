#include <iostream>
using namespace std;
main()
{
	
	int x[5];
	int sum=1;
	
	
		 	for (int i = 0; i< 5; i++)
	{
	 	cout << " Enter value in array = ";
	cin >> x[i];
}
	
	
		for (int i = 0; i < 5; i++)
	{
	cout<<"the array ["<<i<<"] values are = " << x[i] << endl;
	
	
	sum = sum + x[i] ;
		
	}
	
	cout<<"the sum of the array values is = " << sum << endl<<endl;
}
	
