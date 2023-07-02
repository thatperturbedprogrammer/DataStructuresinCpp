// Update − Updates an element at the given index.

// Algorithm
// 1. Start
// 2. Set LA[K-1] = ITEM
// 3. Stop


#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 8};
    int item = 10;
    int k = 3;      // k = position
    int n = 5;      // n = size
    int i;

    cout << "The original array elements are:" << endl;
    for ( i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }

    arr[k] = item;

    cout << "\nThe array elements after updation are:" << endl;
    for ( i = 0; i < n; i ++ ) {
        cout << arr[i] << " ";
    }

    return 0;
}