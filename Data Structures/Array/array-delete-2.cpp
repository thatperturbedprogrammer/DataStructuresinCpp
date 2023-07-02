#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, j, ele;
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
            for (j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];
            break;
        }
    }
    n--;
    cout << "The array after deleting the element is: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
