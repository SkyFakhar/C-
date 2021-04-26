#include<iostream>

using namespace std;
main()
{
int a[10], *ptr;
ptr = &a[0];
for(int i = 0; i<10 ; i++)
{
cout<<"Please Enter value of Element "<<i+1<<" : ";
cin>>*(ptr + i);
}
for(int n = 0; n<10 ; n++)
{
cout<<"Value of Element "<<n+1<<" : "<<*(ptr + n)<<endl;
}

}
