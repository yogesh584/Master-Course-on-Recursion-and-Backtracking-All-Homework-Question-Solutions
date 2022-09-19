/*
    CIRCULAR GAME.
        APPROACH 1 :

        LINK : https://leetcode.com/problems/find-the-winner-of-the-circular-game/
*/
#include <iostream>
using namespace std;

int solve(int n, int k)
{
    /*      BASE CASE       */
    if (n == 1)
        return 0;

    /* curr answer is dependant on the previous answer with a difference of k */
    return (solve(n - 1, k) + k) % n;
}

int findTheWinner(int n, int k)
{
    /* adding 1 to make 1 based indexing as we used mod operator */
    int ans = solve(n, k) + 1;
    return ans;
}

int main()
{
    int n = 5;
    int k = 2;

    cout << "The Winner is : " << findTheWinner(n, k) << endl;
    return 0;
}
