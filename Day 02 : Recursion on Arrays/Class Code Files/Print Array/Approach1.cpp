/*
    PRINT ARRAY :
        APPROACH 1 : LINEAR SEARCH
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{
    // Base Case
    if (index == size)
    {
        return;
    }
    // Printing the element.
    cout << arr[index] << " ";

    // Recurance Relation.
    printArray(arr, size, ++index);

    // Another Way to Write Recurence Relation :
    // printArray(arr,size,index+1);
}

int main()
{
    cout << endl
         << endl;

    // given Array
    int myarray[] = {3, 2, 6, 2, 5, 2};
    int size = 6;

    // Printing the Array.
    cout << "Printing the Array : ";
    printArray(myarray, size, 0);

    cout << endl
         << endl
         << endl;
    return 0;
}
