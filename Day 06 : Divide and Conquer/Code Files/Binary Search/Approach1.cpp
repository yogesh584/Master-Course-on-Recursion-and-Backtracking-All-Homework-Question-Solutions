/*
    BINARY SEARCH
*/
#include <iostream>
using namespace std;

/*      BINARY SEARCH        */
bool binarySearch(int *arr, int start, int end, int target)
{
    /*      BASE CASE       */
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return true;
    else if (arr[mid] < target)
        return binarySearch(arr, mid + 1, end, target);
    else
        return binarySearch(arr, start, mid - 1, target);
}

int main()
{
    cout << endl
         << endl
         << endl;

    int myarr[] = {1, 4, 7, 9, 10, 23, 56, 89};
    int target = 89;
    int size = 8;

    /*      FINDING TARGET IN ARRAY     */
    if (binarySearch(myarr, 0, size - 1, target))
        cout << "Element Found in Array" << endl;
    else
        cout << "Element Not Found in Array" << endl;

    cout << endl
         << endl
         << endl;
    return 0;
}
