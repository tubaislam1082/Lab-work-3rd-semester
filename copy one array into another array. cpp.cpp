
#include<iostream>
using namespace std;

int main()
{
    int a[100], b[100], n, i;

    cin >> n;

    for(i=0; i<n; i++)
        cin >> a[i];

    for(i=0; i<n; i++)
        b[i] = a[i];

    for(i=0; i<n; i++)
        cout << b[i] << " ";

    return 0;
}
