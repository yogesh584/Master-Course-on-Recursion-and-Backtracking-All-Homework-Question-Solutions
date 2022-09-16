/*
    MERGE SORT
*/
#include <iostream>
using namespace std;

/*      MERGE TWO SORTED ARRAYS     */
void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    /*      CREATING TWO DYNAMIC ARRAYS     */
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    /*      COPYING VALUES TO ARRAYS        */
    int mainIndex = start;

    for (int i = 0; i < len1; i++)
        first[i] = arr[mainIndex++];

    for (int i = 0; i < len2; i++)
        second[i] = arr[mainIndex++];

    /*      MERGING TWO SORTED ARRAYS       */
    int index1 = 0;
    int index2 = 0;
    mainIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[mainIndex++] = first[index1++];
        else
            arr[mainIndex++] = second[index2++];
    }

    while (index1 < len1)
        arr[mainIndex++] = first[index1++];

    while (index2 < len2)
        arr[mainIndex++] = second[index2++];

    /*      CLEANING HEAP MEMORY        */
    delete[] first;
    delete[] second;
}

/*      MERGE SORT      */
void mergeSort(int *arr, int start, int end)
{
    /*      BASE CASE       */
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    /*      SORTING LEFT PART       */
    mergeSort(arr, start, mid);

    /*      SORTING RIGHT PART      */
    mergeSort(arr, mid + 1, end);

    /*      MERGING SORTED ARRAYS       */
    merge(arr, start, end);
}

/*      PRINTING THE ARRAY      */
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int myarr[] = {3, 7, 1, 0, 2, 9};
    int size = 6;

    /*      SORTING ARRAY USING MERGE SORT      */
    mergeSort(myarr, 0, size - 1);

    /*      PRINTING SORTED ARRAY       */
    printArray(myarr, size);
    return 0;
}
