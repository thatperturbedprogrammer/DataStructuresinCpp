// Traverse − print all the array elements one by one.

#include <iostream>

using namespace std;

void traverse(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}



int main()
{
    int arr[6] = {11, 22, 33, 44, 55, 66};
    int size = 6;
    traverse(arr, size);

    return 0;
     
}