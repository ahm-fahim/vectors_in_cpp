#include <bits/stdc++.h>
using namespace std;

// Find the last occurrence of an element X  in and given array.
int main()
{
    vector<int> arr;

    for (int i = 0; i < 6; i++)
    {
        int item;
        cin >> item;
        arr.push_back(item);
    };

    cout << "Enter X : ";
    int x;
    cin >> x;

    int result = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            result = i;
        }
    };

    cout << result << endl;

    int result2 = -1;

    for (int i = arr.size()-1; i >=0; i--)
    {
        if (arr[i] == x)
        {
            result2 = i;
            break;
        }
    };
    cout << result2 << endl;

    return 0;
}