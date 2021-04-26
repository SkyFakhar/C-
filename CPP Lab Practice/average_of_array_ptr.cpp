#include<iostream>

using namespace std;
void average(int* , int);
main()
{
int a[5]={2,3,4,5,6};
for(int i = 0 ; i<5 ; i++)
{
cout<<" a["<<i<<"] = "<<a[i]<<endl;
}
average(a, 5);

}
void average(int *x, int size)
{
int sum=0;
for(int i = 0 ; i<5 ; i++)
{
sum = sum + *(x + i);
}
cout<<"The Average of 5 Elements is : "<<(float(sum)/size);
}
