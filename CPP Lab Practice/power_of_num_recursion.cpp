#include<iostream> 
using namespace std; 
int power(int base, int exp); 
int main() 
{ 
   	int num, exp;  	
	cout<<"Enter number: ";  	
	cin>>num; 
 	cout<<"Enter exponent: ";  	
	cin>>exp; 
 	cout<<num<<" Raised to power "<<exp<<" is "<<power(num, exp); 
   	return 0; 
} 
int power(int base, int exp) 
{  	int static x = base;  	
	if(exp == 1) 
	return base;  	
	base = base * x;  	
	return power(base, --exp); 
} 
