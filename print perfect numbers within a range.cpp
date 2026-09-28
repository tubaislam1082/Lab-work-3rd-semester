#include<iostream>
using namespace std;

int main()
{
    int a,b,n,i,sum;
    cin>>a>>b;

    for(n=a;n<=b;n++)
    {
        sum=0;

        for(i=1;i<n;i++)
        {
            if(n%i==0)
                sum=sum+i;
        }

        if(sum==n)
            cout<<n<<" ";
    }

    return 0;
}
