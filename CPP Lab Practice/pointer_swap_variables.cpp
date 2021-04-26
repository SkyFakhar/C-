#include<iostream> 

void swap(int &a, int &b);
using namespace std;
 
int main() 
{
int val1, val2; 
cout<<"Enter first value: "; 
cin>>val1;
cout<<"Enter second value: "; 
cin>>val2;
cout<<"\n\nValues Before swaping:\nval1 = "<<val1<<", val2 = "<<val2<<endl;
swap(val1, val2);
cout<<"\n\nAfter swaping\nval1 = "<<val1<<" val2 = "<<val2;  
return 0;
}
void swap(int &a, int &b)
{
a += b;
b = a - b;
a = a - b;
}
