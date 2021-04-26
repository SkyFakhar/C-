#include<iostream>
#include<cmath>

using namespace std;

main()
{
int x;
cout << "ENTER the number of week's day = ";
cin>>x;

if(x == 1)
{
	cout<<"IT's Monday.";
}
else if(x == 2)
{
	cout<<"IT's Tuesday.";
}
else if(x == 3)
{
	cout<<"IT's Wednesday.";
}
else if(x == 4)
{
	cout<<"IT's Thursday.";
}
else if(x == 5)
{
	cout<<"IT's Friday.";
}
else if(x == 6)
{
	cout<<"IT's Saturday.";
}
else if(x == 7)
{
	cout<<"IT's Sunday.";
}
else
{
	cout<<"          A week has only 7 days.  \n         You entered wrong number.\n\n\n";
}

}
