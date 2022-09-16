/*
    PRINTING HALF ARRAY.
    APPROACH 1 :
        USING SIZE = SIZE/2 FORMULA.
*/

#include <iostream>
using namespace std;

/*      PRINTING HALF ARRAY         */
void printHalfArray(int arr[], int size)
{
    /*      BASE CASE        */
    if (size < 1)
    {
        return;
    }

    /*      PRINTING THE ARRAY       */
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    /*      RECURENCE RELATION       */
    printHalfArray(arr, size / 2);
}

int main()
{
    int arr[] = {3, 4, 1, 5, 6, 2, 7};
    int size = 7;

    /*      CALLING PRINT HALF SIZE FUNCTION        */
    printHalfArray(arr, size);
    return 0;
}
