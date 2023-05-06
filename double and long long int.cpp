#include<bits/stdc++.h>
using namespace std;
int main()
{
    //we can say that why we do not store values in double rather than we use long long int and all as double stores bigger values so the reason is that although double 
    //stores bigger values but its accuracy decreases whenever we try to store bigger values, that's why we use long long int type data type so that it will store values 
    //accurately
    double a = 1e24;
    cout<<fixed<<a<<endl;  //it will print nearby value of a but not exactly a

    return 0;
}
