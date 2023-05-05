#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x = (long long)INT_MAX + 1; 
    //if we don't typecast INT_MAX with long long then it will consider itself as an integer not long long integer
    cout<<x<<endl;

    long long y = INT_MAX + 1; 
    //if we directly sum this maximum value with 1 then it will throw a warning as it consider we are trying to add 1 with integer value which is already max value of integer
    cout<<y<<endl;

    return 0;
}
