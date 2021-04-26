#include<iostream> 
using namespace std; int lcm(int n1, int n2); int main() { 
 	int f, s;  	cout<<"Enter first number: "; 
 	cin>>f; 
 	cout<<"Enter second number: "; 
 	cin>>s; 
 	cout<<"LCM of "<<f<<" and "<<s<<" is "<<lcm(f,s); 
 	return 0; 
} int lcm(int n1, int n2) { 
 	static int n1iv = n1;  	if(n1 % n2 == 0) return n1;  	n1 += n1iv;  	return lcm(n1, n2); 
} 
