#include<iostream>
using namespace std;

int main()
{
    int a,b,n,temp,rem,sum;
    cin>>a>>b;

    for(n=a;n<=b;n++)
    {
        temp=n;
        sum=0;

        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }

        if(sum==n)
        {
            cout<<n<<" ";
        }
    }

    return 0;
}
