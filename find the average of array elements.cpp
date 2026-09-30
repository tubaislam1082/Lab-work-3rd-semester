
#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, sum=0;
    float average;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    average = (float)sum / n;

    cout << average;

    return 0;
}
