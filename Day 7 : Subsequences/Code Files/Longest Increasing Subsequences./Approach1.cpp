/*
    LONGEST INCREASING SUBSTRING.
        APPROACH 1 :
*/

#include <iostream>
using namespace std;

int LIS(int arr[], int n, int curr, int prev)
{
    /*      BASE CASE       */
    if (curr == n)
    {
        return 0;
    }

    /*      INCLUDE CALL     */
    int pick = 0;
    if (prev == -1 || arr[curr] > arr[prev])
        pick = 1 + LIS(arr, n, curr + 1, curr);

    /*      EXCLUDE CALL        */
    int notPick = 0 + LIS(arr, n, curr + 1, prev);

    return max(pick, notPick);
}

int main()
{
    cout << endl
         << endl
         << endl;

    int arr[] = {0, 1, 0, 3, 2, 3};
    int n = 6;

    int curr = 0;
    int prev = -1;
    int ans = LIS(arr, n, curr, prev);

    cout << "Longest Increasing Subsequence is " << ans << endl;

    cout << endl
         << endl
         << endl;
    return 0;
}