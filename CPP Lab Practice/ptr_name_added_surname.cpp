#include<iostream>  
#include<string.h>
using namespace std; 
int main() 
 {
  string firstName,
 *ptr = &firstName,
  secondName = " Fakhar";
 cout<<"Enter your First Name: ";
cin>>firstName;
cout<<"\n\nYour Name before editing = "<<firstName;
*ptr = firstName + secondName;
cout<<"\n\n\nYour Name after editing = "<<firstName;  
return 0;
}
