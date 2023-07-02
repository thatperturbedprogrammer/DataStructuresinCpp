// Search − Searches an element using the given index or by the value.

// Algorithm
// 1. Start
// 2. Set J = 0
// 3. Repeat steps 4 and 5 while J < N
// 4. IF LA[J] is equal ITEM Then GOTO Step 6
// 5. Set J = J + 1
// 6. PRINT J, ITEM
// 7. Stop


#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 8};
    int item = 5;
    int n = 5;
    int i;

    cout << "The original array elements are: " << endl;
    for (i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    for (i = 0; i < n; i++) {
        if ( arr[i] == item ) {
            cout << "Found element " << item << " at position " << i+1 << endl; 
        }
    }

    return 0;
}