// Insertion − Adds an element at the given index.

// Algorithm
// 1. Start
// 2. Create an Array of a desired datatype and size.
// 3. Initialize a variable 'i' as 0.
// 4. Enter the element at ith index of the array.
// 5. Increment i by 1.
// 6. Repeat Steps 1 & 5 until until end of the array.
// 7. Stop.


#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {11, 22, 33, 44, 55, 66};
    int i;

    cout << "Array Before Insertion:" << endl;
    for (i = 0; i < 6; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout << "Inserting elements.." << endl;
    cout << "Array After Insertion:" <<  endl;
    for (i = 0; i < 6; i++) {
        arr[i] = i + 2; // index value + 2   i.e 0+2, 1+2, 2+2, ......
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}