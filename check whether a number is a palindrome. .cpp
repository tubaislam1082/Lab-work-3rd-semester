#include <iostream>
using namespace std;

int main()
{
    int n,rem,temp,rev=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
    {
     cout<<"palindrome";
    }
    else
        {
            cout<<"not palindrome";
        }
}
