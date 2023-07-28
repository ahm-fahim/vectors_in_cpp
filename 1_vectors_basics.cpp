#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vectors basics operations
    vector<int> v;
    
    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;

    v.push_back(1);

    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;

    v.push_back(2);

    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;

    v.push_back(3);

    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;

    v.resize(5);

    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;

    v.resize(10);

    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;

    v.pop_back();
    v.pop_back();

    cout << "\n Size: " << v.size();
    cout << "\nCapacity: " << v.capacity() << endl;
    
    return 0;
}