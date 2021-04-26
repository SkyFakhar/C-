#include <iostream>
using namespace std;
main()
{
	int arr[5] = {4,6,9,66,34};
	
	cout<<"display 3rd number = "<< arr[2]<<endl;
	
	// arr[5] = arr[2] =2
	 cout<<"display 3rd number + 2 = "<< arr[2]+2<<endl;
	 
	 	for (int i = 0; i< 5; i++)
	{
	 	cout << " Enter value in array = ";
	cin >> arr[i];
}

	
	for (int i = 0; i< 5; i++)
	{
	cout<<"the array ["<<i<<"] values are = " << arr[i]<< endl;
	}
	

}
