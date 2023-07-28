#include <bits/stdc++.h>
using namespace std;

// cout the number of occurrences of a particular  element x

int main()
{
    vector<int> v(5);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "X : ";
    int x;
    cin >> x;

    int result = 0;
    for (int i : v)
    {
        if (i == x)
        {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}