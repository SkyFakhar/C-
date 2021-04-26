#include <iostream>
using namespace std;
main()
{
int a[10];
int i;
   cout<<" Enter array elements = "<<endl;
   for (i = 1; i <= 10; i++)
      cin>>a[i];
      
   for (i = 10; i >= 1; i--)
      cout<<"reverse numbers are = "<<a[i]<<endl;

   return 0;
}
