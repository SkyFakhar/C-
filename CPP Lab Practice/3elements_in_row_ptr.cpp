#include<iostream>

using namespace std;
main()
{
int x[12],h=0,*ptr;
ptr = &x[0];
for(int i=0;i < 12;i++)
{
cout<<"Enter value # "<<i+1<<" ";
cin>>*(ptr + i);
}
for(int i=1;i < 5;i++)
{
 for(int j=0;j<3;j++)
{
cout<<"Value # "<<h+1<<" = "<<*(ptr + h)<<"\t";
h++;
}
cout<<endl;
}

}
