/*
    LONGEST ARTHEMATIC SUBSEQUNECE.
        APPROACH 1 :

*/
#include <iostream>
using namespace std;

int LAS(int i, int arr[], int diff)
{
    if (i < 0)
        return 0;

    int ans = 0;

    /*      BACKWARD CHECH      */
    for (int k = i - 1; k >= 0; k--)
    {
        if (arr[i] - arr[k] == diff)
        {
            /*      NUMBER IN AP FOUND      */
            ans = max(ans, 1 + LAS(k, arr, diff));
        }
    }
    return ans;
}

int main()
{

    int arr[] = {9, 4, 7, 2, 10};
    int size = 5;

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int difference = arr[j] - arr[i];
            /* CATCH HERE : add 2 for elements rep. by ith and jth index */
            ans = max(ans, 2 + LAS(i, arr, difference));
        }
    }

    cout << "Printing ans  " << ans << endl;

    return 0;
}