#include<iostream>
using namespace std;

int main()
{
    int d,y,m;
    cin>>d;

    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;

    cout<<y<<" "<<m<<" "<<d;
    return 0;
}
