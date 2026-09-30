
#include<iostream>
using namespace std;

int main()
{
    int n, x, a=-1;

    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            a = i;
        }
    }

    cout << a;

    return 0;
}
