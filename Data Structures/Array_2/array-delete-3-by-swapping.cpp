// More Efficient 0 - Better Time Complexity
// One such method is to swap the element to be deleted with the last element of the array and then decrement the size of the array by one. 
// This method has a time complexity of O(1) 

#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, ele;
    int n = 10;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to be deleted: ";
    cin >> ele;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            arr[i] = arr[n - 1];
            n--;
            break;
        }
    }
    cout << "The array after deleting the element is: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
