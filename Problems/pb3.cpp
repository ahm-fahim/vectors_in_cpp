#include <bits/stdc++.h>
using namespace std;
// count the number of element strictly greater than value X;
int main()
{
    vector <int> v(5);

    for (int i = 0; i < 5; i++){
        cin >> v[i];
    }

    cout << "X: ";
    int x;
    cin >> x;

    int result = 0;

    for (int i: v){
        if(i>x){
            result++;
        }
    }
    cout << result << endl;

    return 0;
}