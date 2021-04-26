#include <iostream> /* library for writing the output to console window*/
using namespace std;
int main()
{ 
        int a,b,c;
    cout <<"Enter 1st num:\n\n"; //user enters the value of 1st num
    cin >>a;
    cout <<"Enter 2nd num:\n\n"; //user enters the value of second num
    cin >>b;
    c=a; //c is equal to 1st num 
    a=b; //1st num is equal to 2nd num
    b=c; //2nd num is qual to c
    cout <<"\n\n value of 1st num"<<endl; 
    cout<<a<<endl; //display a
    cout <<"\n\n value of 2nd num"<<endl;
    cout <<b<<endl; //display b
    return 0; //end the program  }

}
