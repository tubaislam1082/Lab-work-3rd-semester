
#include<iostream>
using namespace std;

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i;

    cin >> n1;

    for(i=0; i<n1; i++)
        cin >> a[i];

    cin >> n2;

    for(i=0; i<n2; i++)
        cin >> b[i];

    for(i=0; i<n1; i++)
        c[i] = a[i];

    for(i=0; i<n2; i++)
        c[n1+i] = b[i];

    for(i=0; i<n1+n2; i++)
        cout << c[i] << " ";

    return 0;
}
