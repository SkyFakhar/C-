//dont give spaces in the name of file

#include<iostream>
//declaring libraries
using namespace std;
//defining standard

//main is predefined function
//any other function which we create will be written outside main

//a variable defined outside the main is global,  can be used in all code blocks i.e {}
	string name;
main()
{
	//a variable defined inside the main is local variable, can oly be used inside this codeblock {}
	
	// cout<<" enter a number"	this is hard code
	
	//std =standard
	
	cout<<"Assalam O Alikum\n";
	
	cout<<"\tSinga ay G \n";
	
	name="Tayyaba";
	
	cout<<"\t \t My name is"<<name;
	cout<<"\n \n \n ";
	
	//new program
	int x=2;
	int y=3;
	
	cout<<x<<"+" <<y <<"=\t";
	cout<<x+y;
	
	cout<<"\n \n \n ";
	
	//new program
	int k=5;
	int l=5;
	int m=6;
	
	cout<<k<<"+"<<l<<"*"<<m<< "=" << k+m*l;
	
	
	cout<<"\n \n \n ";
	
	cout<<k<<"%"<<l<<"="<< k%l;
	
	cout<<"\n \n \n ";
	
	cout<<k<<"%"<<m<<"="<< m%k;
	cout<<"\n \n \n ";
	
	
	cout<<k<<"/"<<m<<"="<< k/m;
	cout<<"\n \n \n ";
	
	
	cout<<k<<"+"<<m<<"="<< k+m;
	cout<<"\n \n \n ";
	
	
	cout<<k<<"-"<<m<<"="<< k-m;
	
}

//all code inside {} is called code block
