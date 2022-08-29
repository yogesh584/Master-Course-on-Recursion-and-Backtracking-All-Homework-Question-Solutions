/*
    REVERSE PRINT ARRAY
        APPROACH 2 : DECREASING THE SIZE OF ARRAY
*/

#include <iostream>
using namespace std;

void reversePrintArray(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }

    cout << arr[size - 1] << " ";

    reversePrintArray(arr, size - 1);
}

int main()
{
    cout << endl
         << endl;

    int myarray[] = {3, 7, 1, 0, 2, 8};
    int size = 6;

    // Printing the Array.
    reversePrintArray(myarray, size);

    cout << endl
         << endl
         << endl;
    return 0;
}
