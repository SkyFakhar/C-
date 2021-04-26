#include<iostream>
using namespace std;
main()
{
	int x[12];
	int k=1;
	for(int i=1;i <= 12;i++)
	{
		cout<<"Enter value "<<i<<" ";
		cin>>x[i];
	}
	for(int i=1;i <= 4;i++)
	{
	    for(int j=1;j<=3;j++)
		{
			cout<<"Value "<<k<<" = "<<x[k]<<"\t";
		k++;
		}
		cout<<endl;
		
	}
}
