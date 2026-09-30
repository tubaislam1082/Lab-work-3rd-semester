
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,num;
    cin>>n;

    for(i=0;i<n;i++)
    {
        num=1;

        for(j=0;j<n-i-1;j++)
            cout<<" ";

        for(j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num=num*(i-j)/(j+1);
        }

        cout<<endl;
    }

    return 0;
}
