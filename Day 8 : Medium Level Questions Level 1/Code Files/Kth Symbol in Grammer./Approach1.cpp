/*
    KTH SYMBOL IN GRAMMER.
        APPROACH 1 :
            USING TREE APPROACH.

        LINK : https://leetcode.com/problems/k-th-symbol-in-grammar/
*/
#include <iostream>
using namespace std;

int kthGrammar(int n, int k)
{
    /*      BASE CASE       */
    if (n == 1)
        return 0;

    int parent = kthGrammar(n - 1, k / 2 + k % 2);

    if (parent == 0)
    {
        if (k & 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        /*      parent == 1      */
        if (k & 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    cout << endl
         << endl
         << endl;

    int n = 1;
    int k = 1;

    cout << kthGrammar(n, k) << endl;

    cout << endl
         << endl
         << endl;
    return 0;
}
