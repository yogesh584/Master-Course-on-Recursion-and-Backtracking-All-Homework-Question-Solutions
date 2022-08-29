/*
    PRINT ARRAY
        APPROACH 2 : MINIMIZING THE ARRAY
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    // Base Case
    if (size == 0)
    {
        return;
    }

    // Printing Array Element.
    cout << arr[0] << " ";

    // Recurance Relation.
    printArray(arr + 1, size - 1);
}

int main()
{
    cout << endl
         << endl;

    int myarray[] = {3, 7, 1, 0, 2, 8};
    int size = 6;

    // Printing the Array.
    printArray(myarray, size);

    cout << endl
         << endl
         << endl;

    return 0;
}
