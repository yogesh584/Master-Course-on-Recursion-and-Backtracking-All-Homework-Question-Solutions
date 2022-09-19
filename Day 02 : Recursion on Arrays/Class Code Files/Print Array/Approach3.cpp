/*
    PRINT ARRAY
        APPROACH 3 : PRINTING WHILE COMING FROM FUCTION CALL (FUNCTION CALL SE VAPIS AATE SAMAY PRINTING).
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int index)
{
    if (index == 0)
    {
        return;
    }

    printArray(arr, --index);

    cout << arr[index] << " ";
}

int main()
{
    cout << endl
         << endl;

    int myarray[] = {3, 7, 1, 9, 2, 0, 5};
    int size = 7;
    int index = size;

    printArray(myarray, index);

    cout << endl
         << endl
         << endl;
    return 0;
}
