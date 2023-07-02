// Deletion − Deletes an element at the given index.

// Algorithm
// Consider LA is a linear array with N elements and K is a positive integer such that K<=N. 
// Following is the algorithm to delete an element available at the Kth position of LA.

// 1. Start
// 2. Set J = K
// 3. Repeat Steps 4 and 5 while J < N
// 4 Set LA[J] = LA[J + 1]
// 5. Set J = J + 1
// 6. Set N = N - 1
// 7. Stop


#include <iostream>

using namespace std;

void deletion(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i + 1];
        size = size - 1;

    }
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66};
    int i;
    int size = 6;

    cout << "The Original Elements are:" << endl;

    for (i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    deletion(arr, size);

    cout << "The Array Elements after Deletion:" << endl;

    for (i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}