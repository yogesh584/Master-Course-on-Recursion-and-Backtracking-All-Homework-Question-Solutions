/*
    PRINT HALF ARRAY.
    APPROACH 2 :
        USING START AND END POINTERS.
*/
#include <iostream>
using namespace std;

/*      PRINTING HALF ARRAY         */
void printHalfArray(int arr[], int start, int end)
{

    /*      BASE CASE        */
    if (start >= end)
    {
        return;
    }

    /*      PRINTING THE ARRAY       */
    for (int i = 0; i < end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int mid = start + (end - start) / 2;

    /*      RECURENCE RELATION       */
    printHalfArray(arr, start, mid);
}

int main()
{
    int arr[] = {4, 6, 3, 7, 2, 0, 8};
    int size = 7;

    /*      CALLING PRINT HALF SIZE FUNCTION        */
    printHalfArray(arr, 0, size - 1);
    return 0;
}
