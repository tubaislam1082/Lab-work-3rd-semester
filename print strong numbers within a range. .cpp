
#include<iostream>
using namespace std;

int main()
{
    int a,b,n,temp,rem,i,fact,sum;
    cin>>a>>b;

    for(n=a;n<=b;n++)
    {
        temp=n;
        sum=0;

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
            cout<<n<<" ";
    }

    return 0;
}
