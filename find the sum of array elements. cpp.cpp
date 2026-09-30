
#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, sum=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    cout << sum;

    return 0;
}
