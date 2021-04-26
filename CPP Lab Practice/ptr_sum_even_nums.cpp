#include<iostream>  
using namespace std; 
int main() 
{
int a, b = 2, 
*ptr = &b, sum = 0, 
*ptrsum = &sum; 
cout<<"Enter a number: ";
cin>>a; 
while(*ptr <= a) {
 *ptrsum += *ptr;
*ptr += 2;
}
cout<<"\nThe sum of even numbers from 1 to "<<a<<" = "<< *ptrsum<<endl;  
return 0;
}
