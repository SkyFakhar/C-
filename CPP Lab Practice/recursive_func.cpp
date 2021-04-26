#include<iostream>
using namespace std;


//code for recursive function. 
//a function that calls itself again and again untill a condition is satisified 

void func(int = 4, int = 5); // here 4 and 5 are the default values 
// this is function's declaration
// if i also define funcion before main() then... 
// ...we dont have to declare it separately

void recfunc(int);

main()
{
	
	int s;
	cout<<"Enter a number = ";
	cin>>s;
	recfunc(s);
	
}

void recfunc(int n)
{
	static int temp = 0; // static variable dosen't initialize their valus for every iteration
	if (temp <= n)
	{
		cout<<temp++ << endl;
		recfunc(n);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
