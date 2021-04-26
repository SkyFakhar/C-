#include <iostream>
using namespace std;
int main()
{
    int units;
    cout<<"enter units consumes"<<endl;
    cin>>units;
    if(units<=199)
    {
        cout<<"your bill is "<<units*1.2;
    }
    else if(units<400 && units>=200)
    {
        cout<<"your bill is "<<units*1.5;
    }
    else if(units<600 && units>=400)
    {
        float final_bill=units*1.8;
        float subcharge=0.15*final_bill;
        cout<<"your bill is "<<(final_bill+subcharge);
    }
    else if(units>=600)
    {
Cout <<"amount charges 2 per unit=";
        float final_bill=units*2;
Cout <<"bill2";
Cout <<"subcharge amount :";
        float subcharge2=0.15*final_bill;
Cout <<"subcharge2";
        cout<<"your bill is "<<(final_bill+subcharge2);
    }
    return 0;
}
