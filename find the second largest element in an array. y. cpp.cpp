
#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, temp;

    cin >> n;

    for(i=0; i<n; i++)
        cin >> arr[i];

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << arr[1];

    return 0;
}
