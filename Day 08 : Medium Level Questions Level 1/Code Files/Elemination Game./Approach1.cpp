/*
    ELEMINATION GAME.
        APPROACH 1 :

        LINK : https://leetcode.com/problems/elimination-game/
*/
#include <iostream>
using namespace std;

/*      FINDING LAST IN ELEMINATION GAME        */
int lastRemaining(int n)
{
    if (n == 1)
        return 1;

    return 2 * (1 + (n / 2) - lastRemaining(n / 2));
}

int main()
{
    cout << endl
         << endl
         << endl;

    int n = 9;
    cout << "Last Remaning Number is : " << lastRemaining(n) << endl;

    cout << endl
         << endl
         << endl;
    return 0;
}
