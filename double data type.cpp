#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a = 12;
    double b = 20.3;
    double c = a*b;

    //print exact value with given number of decimal point | no extra zero's ater decimal
    cout<<a<<endl;
    cout<<b<<endl; 
    cout<<c<<endl;

    //print value with 6 point decimal
    cout<<fixed<<a<<endl;
    cout<<fixed<<b<<endl;
    cout<<fixed<<c<<endl;

    //print value with manually given setprecision of the number
    cout<<fixed<<setprecision(2)<<a<<endl;
    cout<<fixed<<setprecision(2)<<b<<endl;
    cout<<fixed<<setprecision(2)<<c<<endl;

    //print number with no decimal, if the number is in decimal then it will round off the number
    cout<<fixed<<setprecision(0)<<c<<endl;

    //it print round-off value of d with 3 decimal points
    double d = 243.4236;
    cout<<fixed<<setprecision(3)<<d<<endl; 
    
    
    //if the value is bigger then it will print in e-notation
    double x = 100000000;
    cout<<x<<endl;
    
    //for printing this as exact we can use fixed
    cout<<fixed<<x<<endl;
    
    //for printing this as exact but with no decimal we can set its precision
    cout<<fixed<<setprecision(0)<<x<<endl;

    return 0;
}
