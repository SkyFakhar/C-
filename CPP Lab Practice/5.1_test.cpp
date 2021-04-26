#include <iostream>
using namespace std;

int main()
{
    int i;
    float arr[100];

    for(i = 1; i <= 10; i++)
    {
       cout << "Enter Number " << i << " : ";
       cin >> arr[i];
    }
    for(i = 1;i <= 10; i++)
    {
	
       if(arr[0] < arr[i])
           
    }
    cout << "Largest number is = " << arr[0];
}
