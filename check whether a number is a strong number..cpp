#include<iostream>
using namespace std;

int main()
{
    int n,temp,rem,i,fact,sum=0;
    cin>>n;
    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
        cout<<"Strong";
    else
        cout<<"Not Strong";

    return 0;
}
