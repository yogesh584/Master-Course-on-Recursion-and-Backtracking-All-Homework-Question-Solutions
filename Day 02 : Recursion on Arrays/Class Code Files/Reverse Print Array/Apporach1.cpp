/*
    REVERSE ARRAY PRINT
        APPROACH 1 : LINEAR SEARCH
*/

#include <iostream>
using namespace std;

void reversePrintArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }

    cout << arr[size - index - 1] << " ";

    reversePrintArray(arr, size, ++index);
}

int main()
{
    cout << endl
         << endl;

    int myarray[] = {1, 3, 5, 7};
    int size = 4;
    int index = 0;

    cout << "Printing Array in Reverse Order : ";
    reversePrintArray(myarray, size, index);

    cout << endl
         << endl
         << endl;
    return 0;
}
