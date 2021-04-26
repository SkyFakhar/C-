#include<iostream>
using namespace std;

main()
{
	float a,b;
	char c, x;
	a: cout<<"Enter First Number = "<<endl;
	cin>>a;
	
	cout<<" \n Select the operator =  ";
	cin>>c;
	
	cout<<"\n Enter second Number = "<<endl;
	cin>>b;
	switch (c)
	{
		case '+':
			cout<<a<<" + "<<b<<" = "<<a+b;
		break;
		case '-':
			cout<<a<<" - "<<b<<" = "<<a-b;
		break;
		case '*':
			cout<<a<<" * "<<b<<" = "<<a*b;
		break;
		case '/':
			cout<<a<<" / "<<b<<" = "<<a/b;
		break;
		default:
			cout<<"Wrong Symbol";
    }
     cout<<"\n\n ****************************************************";
    cout<<" \n\n Do You want another calculation press (y) if yes and (n) if no:";
    cin>>x;
    
    if (x =='y')
    
    goto a;

    
}
