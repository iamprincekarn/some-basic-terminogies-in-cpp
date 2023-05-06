

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x = (long long)INT_MAX + 1; //or we can write this as //long long x = INT_MAX + 1ll * 1;
    //if we don't typecast INT_MAX with long long then it will consider itself as an integer not long long integer
    cout<<x<<endl;

    long long y = INT_MAX + 1; 
    //if we directly sum this maximum value with 1 then it will throw a warning as it consider we are trying to add 1 with integer value which is already max value of integer
    cout<<y<<endl;
    
    int x = 10;
    char c = 'a';
    cout<<x+c<<endl; //here output will be some integer as calculation always done in higher data type here calculation is between char and int so integer will be the output

    
    //aur iss wazah se hi upr ke do type me int overflow aa rha tha kyuki hm do int ko sum kr rhe the jo actually int me store ho rha tha bhale hi bd me ll me store ho rha ho
    return 0;
}
