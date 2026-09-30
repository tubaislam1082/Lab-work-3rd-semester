
#include<iostream>
using namespace std;

int main()
{
    int  n, i, even=0, odd=0;
    int a[n];

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];

        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}
