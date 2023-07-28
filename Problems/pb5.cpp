#include <bits/stdc++.h>
using namespace std;
// sort or not
int main()
{

    int arr[6] = {1, 21, 4, 6, 8, 10};

    bool flag = true;

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            flag = false;
        }
    }

    cout << flag << endl;
}