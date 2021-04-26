#include<iostream>  

using namespace std; 

int main() 
{
int var, *ptr = &var;

cout<<"Enter a value = ";
 cin>>var;
 
for(int i = 0; i < 5; i++) 
{ 
(*ptr)++;
}
cout<<"\n\nThe incremented Value by 5 is = "<<*ptr;  
return 0;
}
