#include<iostream> 

using namespace std; 

int main() 
{
	
int val1, val2, sum = 0, *ptr = &sum; 

cout<<"Enter first value: "; 
cin>>val1;
cout<<"Enter second value: "; 
cin>>val2;
sum = val1 + val2;
cout<<"Sum of "<<val1<<" and "<<val2<<" is "<<*ptr;  
return 0;

}
