#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int arr[n];
    int i, ele;

    cout << "Enter Array Elements:" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
        
    cout << "Array: " << endl;
    
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}