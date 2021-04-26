#include<iostream>
using namespace std;
int main()
{
    float ID,Unit,ans,ans2,ans3;
    cout<<"Enter the Customer I.D"<<endl;
    cin>>ID;
    cout<<"Enter the Units Consumed"<<endl;
    cin>>Unit;
     
    
    if (Unit <= 199)
    {
       ans=(1.20*Unit);

       if (ans>400)
       {
           ans2=(ans*0.15);
            ans3=(ans2+ans);
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.1.20 per unit:"<<ans<<endl;
            cout<<"Surcharge Amount:"<<ans2<<endl;
            cout<<"Net Amount Paid by Customer:"<<ans3;
       }
       else
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.1.20 per unit:"<<ans<<endl;
            cout<<"Net Amount Paid by Customer:"<<ans;
    }
     if (Unit <= 400)
    {
       ans=(1.50*Unit);

       if (ans>400)
       {
           ans2=(ans*0.15);
            ans3=(ans2+ans);
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.1.50 per unit:"<<ans<<endl;
            cout<<"Surcharge Amount:"<<ans2<<endl;
            cout<<"Net Amount Paid by Customer:"<<ans3<<endl;
       }
       else
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.1.50 per unit:"<<ans<<endl;

    }
        if (Unit <= 600)
    {
       ans=(1.80*Unit);

       if (ans>400)
       {
           ans2=(ans*0.15);
            ans3=(ans2+ans);
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.1.80 per unit:"<<ans<<endl;
            cout<<"Surcharge Amount:"<<ans2<<endl;
            cout<<"Net Amount Paid by Customer:"<<ans3<<endl;
       }
       else
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.1.80 per unit:"<<ans<<endl;

    }

    if (Unit > 600)
    {
       ans=(2.00*Unit);

       if (ans>400)
       {
           ans2=(ans*0.15);
            ans3=(ans2+ans);
            cout<<"Customer I.D:"<<ID<<endl;
            cout<<"Units Consumed:"<<Unit<<endl;
            cout<<"Amount Charges @ Rs.2.00 per unit:"<<ans<<endl;
            cout<<"Surcharge Amount:"<<ans2<<endl;
            cout<<"Net Amount Paid by Customer:"<<ans3<<endl;
       }
       

    }
    return 0;
}

