#include<iostream>

using namespace std;
void x();

int main() 
{ 
 	x();  	 
 	return 0; 
} 
void x() 
{ 
 	static int i = 1;
	if(i > 100) return; 
 	cout<<i<<"\t"; 
 	i++; 
 	x(); 
} 
