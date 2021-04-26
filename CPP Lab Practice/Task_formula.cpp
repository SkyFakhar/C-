#include<iostream>
#include<cmath>
using namespace std;

main()
{
	float a,b,c,d,e,k,m;
	cout<<"Enter a = ";
	cin>>a;
	cout<<"\n";
	
	cout<<"Enter b = ";
	cin>>b;
	cout<<"\n";
	
	cout<<"Enter c = ";
	cin>>c;
	cout<<"\n";
	
	cout<<"Enter d = ";
	cin>>d;
	cout<<"\n";
	
	cout<<"Enter e = ";
	cin>>e;
	cout<<"\n";
	
	k=((a*a*a)+(b*b)-d)/b;
	m=a*(b+c*(e+a)/b)-10;
	int answer =k/m ;
	cout<<answer;
	
}

