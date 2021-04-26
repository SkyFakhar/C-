#include<iostream> 
using namespace std; 

int fact(int n); 
int main() { 
 	int x; 
 	cout<<"Enter a number for factorial: "; 
 	cin>>x; 
 	if(x >= 0) cout<<"Factorial of "<<x<<" is "<<fact(m); 
 	else 
 	cout<<"Factorial of negative numbers cannot be calculated."; 
 	
	 return 0; 
} int fact(int n) 
{ 
 	if(n == 0) return 1;  	
	 return n * fact(n - 1); 
}  
