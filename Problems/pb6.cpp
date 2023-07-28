#include <bits/stdc++.h>
using namespace std;
// find the difference between the sum of elements at even
// indices to the sum  of elements at odd indices
int main()
{
    int arr[6] = {1, 2, 4, 6, 8, 10};

    int even = 0;
    int odd = 0;

    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }

    cout << even << endl;
    cout << odd << endl;

    cout << abs(even - odd) << endl;

    return 0;
}