#include <iostream>

using namespace std;

// 1 - Display
void display(int arr[], int size)
{
    int i;
    cout << "The original array elements are :\n";
    for (i = 0; i < size; i++ ) {
        cout << arr[i] << " ";
    }
}

// 2 - Traverse
void traverse(int arr[], int size)
{
    cout << "Traversing..." << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// 3 - Insert
void insert(int arr[], int size) 
{
    cout << "Enter Position to Insert at:" << endl;
    int pos;
    cin >> pos;

    cout << "Enter element to insert:" << endl;
    int ele;
    cin >> ele;

    int i;
    cout << "Inserting elements.." << endl;
    cout << "Array After Insertion:" <<  endl;
    for (i = 0; i < size; i++) {
        arr[pos-1] = ele;
        cout << arr[i] << " ";
    }

}

// 4 - Delete
void deletion(int arr[], int size)
{
    int i;
    int ele;
    cout << "Enter the element to be deleted: ";
    cin >> ele;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            arr[i] = arr[size - 1];
            size--;
            break;
        }
    }
    cout << "The array after deleting the element is: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}

// 5 - Update
void update(int arr[], int size)
{
    int i;

    int pos;
    cout << "Enter array position to be updated: ";
    cin >> pos;

    int ele;
    cout << "Enter updated element: ";
    cin >> ele;
    arr[pos-1] = ele;

    cout << "Updated array:" << endl;

    for ( i = 0; i < size; i++ ) {
        cout << arr[i] << " ";
    }
}

// 6 - Search
void search(int arr[], int size)
{
    int i;
    int ele;
    int ans = -1;

    cout << "Enter the element to be searched: ";
    cin >> ele;

    for ( i = 0; i < size; i++ ) {
        if( arr[i] == ele ){
            cout << "Element " << ele << " found at position " << i + 1;
            ans = 1;
            break;
        }
    }

    if ( ans < 0) {
        cout << "Element not found.";
    }
}

int main()
{
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    int i;
    int ele;
    int ans = -1;

    cout << "Enter the elements of the array: " << endl;

    for ( i = 0; i < size; i++ ) {
        cin >> arr[i];
    }

    cout << "\nCreated array :" << endl;
    for ( i = 0; i < size; i++ ) {
        cout << arr[i] << " ";
    }

    int menuop;
    cout << "\n\nOperations menu:" << endl;
    cout << "1 - Display\n" <<
            "2 - Traverse\n" <<
            "3 - Insert\n" <<
            "4 - Delete\n" <<
            "5 - Update\n" <<
            "6 - Search" << endl;

    cin >> menuop;

    switch(menuop){

        case 1:
            display(arr, size);
            break;

        case 2:
            traverse(arr, size);
            break;

        case 3:
            insert(arr, size);
            break;

        case 4:
            deletion(arr, size);
            break;

        case 5:
            update(arr, size);
            break;

        case 6:
            search(arr, size);
            break;

        default:
            cout << "No operation selected";
            break;

    }

    return 0;
}