#include<iostream> 
using namespace std; 
int sum(int x = 5, int y = 25);
 int main() 
 { 
 	int i, j; 
 	cout<<"Enter First num: "; 
 	cin>>i; 
 	cout<<"Enter second num: "; 
 	cin>>j; 
 	if((i==0)&&(j==0))
	  { 
 	 	cout<<sum(); 
 	}else if((i==0) || (j==0)) 
	 { 
 	 	cout<<((i==0)?sum(j):sum(i)); 
 	}else
	 {  	 	cout<<sum(i,j); 
 	} 
 
 	return 0; 
} 
int sum(int x, int y) 
{  return x + y; } 
