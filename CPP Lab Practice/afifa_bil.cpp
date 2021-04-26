#include <iostream>
using namespace std;
int main()
{
    int units;
    cout<<"enter units consumes"<<endl;
    cin>>units;
    if(units<=199) //condition 1//
    {
        cout<<"your bill is "<<units*1.2;
    }
    else if(units<400 && units>=200) //condition 2//
    {
        cout<<"your bill is "<<units*1.5;
    }
    else if(units<600 && units>=400) //condition 3//
    {
        float bill1=units*1.8;
        float subcharge=0.15*bill1; //extra//
        cout<<"your bill is "<<(bill1+subcharge);
    }
    else if(units>=600) //condition 4//
    {
        float bill2=units*2;
        float subcharge2=0.15*bill2; //extra charge//
        cout<<"your bill is "<<(bill2+subcharge2);
    }
    return 0;
}
