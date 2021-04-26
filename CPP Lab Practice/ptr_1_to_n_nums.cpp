#include<iostream>  

using namespace std; 
int main() 
{
int a, b = 1, *ptr = &b; 
cout<<"Enter a number: "; 
cin>>a;
cout<<"\n\nThe list from 1 to "<<a<<" is = "; 
while(*ptr <= a)
	{
	cout<<*ptr<<" "; 
	
	(*ptr)++;
	}
  return 0;
}
