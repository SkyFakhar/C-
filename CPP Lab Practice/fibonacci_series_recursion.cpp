#include<iostream> 
using namespace std; 
void fib(int n); 
int main() 
{ 
 	int x; 
 	cout<<"Enter a number to find fibonacii seriese upto that number: "; 
 	cin>>x;  	
	 fib(x);  	
		
	 return 0; 
} void fib(int n) 
{ 
 	static int i = 0,  j = 1;  	
	 cout<<i<<", ";  	
	 j+= i; 
 	i = j - i;  	
	 if(i > n) return; 
 	fib(n); 
} 
