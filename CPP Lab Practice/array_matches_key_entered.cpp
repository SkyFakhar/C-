#include<iostream>

using namespace std;
main()
{
	int x[5], key;
	for(int i = 1; i <= 5 ; i++)
	{
		cout<<"Enter number "<<i<<" = ";
		cin>>x[i];
	}
	
	cout<<"\nEnter Key_Number : ";
	cin>>key;
	
	for(int j = 1; j <= 5; j++ )
	
		if(x[j] == key)
		{
	
		cout<<"Your Key matched with "<<x[j]<<" and index "<<j<<" of the array\n\n";
		}
	else
	{
	
	    cout<<"The key doesnt match with any index of array";
	}
return 0;
}
