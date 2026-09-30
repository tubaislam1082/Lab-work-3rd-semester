
#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, count;

    cin >> n;

    for(i=0; i<n; i++)
        cin >> arr[i];

    for(i=0; i<n; i++)
    {
        count = 1;

        if(arr[i] == -1)
            continue;

        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        cout << arr[i] << " = " << count << endl;
    }

    return 0;
}
