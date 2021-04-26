#include<iostream>
#include<string>

using namespace std;

//it is like array
//structure save different types of data. it is user defined data type
//variables are called members in structure
struct employees
{
	string name;
	int salary;
	int age;
};
void print(employees x);
main()
{
	employees x[2];
	
	for (int i=0; i<3; i++)
	{
	cout << "\nEnter name ";
	cin>>x[i].name;
	cout << "\nEnter salry ";
	cin>>x[i].salary;
	cout << "\nEnter age ";
	cin>>x[i].age;
}
for (int i=0; i<3; i++)
	{
		print(x[0]);
		cout<<endl;		
}
}
void print(employees x)
{
	
	cout<<"\tEmployee"<<" name is"<<x.name;
	cout<<"\tEmployee"<<" salary is"<<x.salary;
	cout<<"\tEmployee"<<" age is"<<x.age;
}









