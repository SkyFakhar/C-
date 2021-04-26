#include<iostream>

using namespace std;
main()
{
int a[5], *ptr = &a[0] , sum = 0;
for(int i = 0 ; i < 5 ; i++)
{
cout<<"Please Enter Value Of Element "<<i+1<<" : ";
cin>>*(ptr + i);
}
for(int i = 0 ; i < 5 ; i++)
{
sum =sum + *(ptr + i);
}
cout<<"Total sum of all element entered in array is : "<<sum;

}

