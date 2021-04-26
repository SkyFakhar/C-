#include<iostream>
using namespace std;

main()
{

float unit,cID,ans;


cout<<"Enter the Customer ID = "<<"\n\n";
cin>>cID;


cout<<"Enter the units consumed = "<<"\n\n";
cin>>unit;




if (unit <= 199)
{
	ans = unit * 1.20;
}
else if (unit>=200 && unit<= 400)
{
	ans=unit*1.50;

}
else if (unit> 400 && unit<= 600)
{
	ans=unit*1.80;

}
else
{
    ans=unit*2;
}
if (ans == 400)
{
    cout<<"Customer ID NO:  "<< cID<<"\n";
    cout<<"Units Consumed:  "<< unit<<"\n\n";
	cout<<" Amount Charges @ Rs: 2 per unit = "<<ans;
	cout<<" SurCharge amount = "<< (ans*0.15);
	cout<<" Net amount paid by Customer = "<< (ans*0.15)+ans;
}


}



