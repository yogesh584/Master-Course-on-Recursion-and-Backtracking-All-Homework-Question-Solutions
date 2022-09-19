/*
    FIND FIRST OCCURANCE
        APPROACH 1 : LINEAR SERACH (SEARCHING FROM LAST)
*/

#include <iostream>
using namespace std;

int lastOccurence(int arr[], int index, int elementToSearch)
{
    if (index < 0)
    {
        return -1;
    }

    if (arr[index] == elementToSearch)
    {
        return index;
    }

    return lastOccurence(arr, --index, elementToSearch);
}

int main()
{
    cout << endl
         << endl;
    int myarray[] = {0, 7, 1, 9, 2, 4, 2};
    int size = 7;
    int index = 6;
    int elementToSearch = 4;

    cout << "Index of Element is : " << lastOccurence(myarray, index, elementToSearch);

    cout << endl
         << endl
         << endl;
    return 0;
}
