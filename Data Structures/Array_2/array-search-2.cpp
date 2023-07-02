#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    int i;
    int ele;
    int ans = -1;

    cout << "Your array:" << endl;
    for ( i = 0; i < n; i++ ) {
        cout << arr[i] << ", " << endl;
    }

    cout << "Enter the elements of the array: " << endl;

    for ( i = 0; i < n; i++ ) {
        cin >> arr[i];
    }

    cout << "Updated array :" << endl;
    for ( i = 0; i < n; i++ ) {
        cout << arr[i] << ", " << endl;
    }

    cout << "Enter the element to be searched: ";
    cin >> ele;

    for ( i = 0; i < n; i++ ) {
        if( arr[i] == ele ){
            cout << "Element " << ele << " found at position " << i + 1;
            ans = 1;
            break;
        }
    }

    if ( ans < 0) {
        cout << "Element not found.";
    }
    return 0;
}