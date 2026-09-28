#include<iostream>
using namespace std;

int main()
{
    int a,b,x,y,temp,gcd,lcm;
    cin>>a>>b;
    x=a;
    y=b;

    while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    gcd=x;
    lcm=(a*b)/gcd;
    cout<<"Lcm= "<<lcm;
}
