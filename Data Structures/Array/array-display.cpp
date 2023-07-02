// Display − Displays the contents of the array.

// Algorithm
// 1. Start
// 2. Print all the element in the array
// 3. Stop

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i;
    int n = 8;

    cout << "The original array elements are :\n";
    for (i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }

    return 0;
}