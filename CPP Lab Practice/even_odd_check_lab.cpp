#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
   int i;
 
   cout << "Enter a number: ";
   cin >> i;
   
      if (i % 2 == 0)
	  {
      	cout << i << " is a prime number";
     }
  		 else{
		   
     	 cout << i << " is an odd number";
 	  }
    getch();
}
