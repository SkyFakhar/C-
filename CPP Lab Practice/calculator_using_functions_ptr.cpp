#include<iostream>

using namespace std;
float addition(int *a, int *b);
float subtraction(int *a, int *b);
float division(int *a, int *b);
float multiplication(int *a, int *b);
float calculate(int *a, int *b, float((*function)(int*, int*)));
int main()
{
int a,b,c;
cout<<"Enter First number: ";
cin>>a;
cout<<"Enter Second number: ";
cin>>b;
cout<<" \n\n To Add Enter = 1 \n To Subtract Enter = 2 \n To Multiply Enter = 3 \n To Devide Enter = 4 \n\n Enter the operation = ";

cin>>c;
switch(c)
{
case 1:
cout<<"\nResult of Addition is "<<calculate(&a, &b,addition)<<endl;
break;
case 2:
cout<<"\nResult of Subtraction is "<<calculate(&a, &b,subtraction)<<endl;
break;
case 3:
cout<<"\nResult of Multiplication is "<<calculate(&a, &b,multiplication)<<endl;
break;
case 4:
cout<<"\nResult of Devision is "<<calculate(&a, &b,division)<<endl;
break;
default:
cout<<"Wrong Entry";
break;
}
}
float calculate(int *a, int *b, float((*function)(int*, int*)))
{
return function(a, b);
}
float addition(int *a, int *b)
{
return *a + *b;
}
float subtraction(int *a, int *b)
{
return *a - *b;
}
float multiplication(int *a, int *b)
{
return *a * *b;
}
float division(int *a, int *b)
{
return ((float) *a) / *b;
}
