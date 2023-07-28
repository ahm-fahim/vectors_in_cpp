#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    
    //for loop
    for (int i = 0; i < 5; i++)
    {
        int item;
        cin >> item;
        arr.push_back(item);
    };

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    arr.insert(arr.begin() + 2, 99);
    // foreach loop
    for(int item: arr){
        cout << item << " ";
    }

    cout << endl;

    arr.erase(arr.end() - 1);

    // while
    int idx = 0;
    while(idx < arr.size()){
        cout << arr[idx++] << " ";
    }
    cout << endl;

    return 0;
}