#include<iostream>

using namespace std;
main()
{
int a[5],*ptr = &a[0], n, m, sum = 0;
for(int i = 0 ; i<5 ; i++)
{
cout<<"Please Enter Value Of array Element "<<i+1<<" : ";
cin>>*(ptr + i);
}
cout<<"\n\nPlease Enter the index number to sum : ";
cin>>n;
cout<<"Please Enter the index number to sum  : ";
cin>>m;
sum = *(ptr+ (n-1)) + *(ptr + (m-1));
cout<<"The sum of Element "<<n<<" and Element "<<m<<" equal to : "<<sum;
}

