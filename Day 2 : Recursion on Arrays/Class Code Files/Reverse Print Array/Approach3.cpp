/*
    REVERSE PRINT ARRAY
        APPROACH 3 : PRINTING WHILE COMING FROM FUCTION CALL (FUNCTION CALL SE VAPIS AATE SAMAY PRINTING).
*/

#include <iostream>
using namespace std;

void reversePrintArray(int arr[], int size, int index)
{
    if (index == 0)
    {
        return;
    }

    reversePrintArray(arr, size, --index);
    cout << arr[size - index - 1] << " ";
}

int main()
{

    cout << endl
         << endl;

    int myarray[] = {3, 7, 1, 9, 2, 0, 5};
    int size = 7;
    int index = size;

    reversePrintArray(myarray, size, index);

    cout << endl
         << endl
         << endl;
    return 0;
}
