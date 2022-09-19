/*
    FIND FIRST OCCURENCE
        APPROACH 2 : DECREASING THE SIZE OF ARRAY
*/

#include <iostream>
using namespace std;

int lastOccurence(int arr[], int size, int index, int elementToFind)
{
    if (size == 0)
    {
        return -1;
    }

    if (arr[index] == elementToFind)
    {
        return index;
    }

    return lastOccurence(arr, size - 1, index - 1, elementToFind);
}

int main()
{
    cout << endl
         << endl;
    int myarray[] = {0, 7, 1, 9, 2, 4, 2};
    int size = 7;
    int index = 7;
    int elementToSearch = 2;

    cout << "Index of Element is : " << lastOccurence(myarray, size, index, elementToSearch);

    cout << endl
         << endl
         << endl;
    return 0;
}
