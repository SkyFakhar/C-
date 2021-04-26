#include<iostream>
using namespace std;
main()
{

	int a=4;
	int b=3;
	
	int result_and=0;
	int result_or=0;
	int result_not=0;

	result_and= a & b;
	result_or= a | b;
	result_not= ~a;

	cout<<"\n \n result of a and b =  "<<result_and <<" \n\n";
		cout<<"result of a or b = "<<result_or <<" \n\n";
			cout<<"result of not a =  "<<result_not << " \n\n";

}
