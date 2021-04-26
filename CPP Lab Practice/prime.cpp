#include<iostream>
using namespace std;

int grade(int);
main()
{
	int n, k,i;
	cout<<" Enter a number"<<endl;
	cin>>n;
	for (i=1; i<=n; i++)
	{
	
		if(n % i == 0)
		{
				cout<<"The Number You Entered Is A Prime Number "<<endl;
		}
		else{		
				cout<<"The  Number You Entered Is Not A Prime Number ";
				}
			
}
}
	
