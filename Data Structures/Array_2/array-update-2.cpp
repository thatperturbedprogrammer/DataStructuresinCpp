#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    int i;
    int pos, ele;

    cout << "Enter the elements of the array:" << endl;
    for ( i = 0; i < n; i++ ) {
        cin >> arr[i];
    }

    cout << "Your array:" << endl;
    for ( i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }

    cout << "Enter array position to be updated: ";
    cin >> pos;

    cout << "Enter updated element: ";
    cin >> ele;
    arr[pos-1] = ele;

    cout << "Updated array:" << endl;

    for ( i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }

    return 0;

}