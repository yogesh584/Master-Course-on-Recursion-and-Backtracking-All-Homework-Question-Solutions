/*
    IS SUBSEQUNECES.
        APPROACH 1 :
            FIND ALL SUBSEQUNCES AND CHECK.

        LINK : https://leetcode.com/problems/is-subsequence/

        PROBLEMS :
            IT WILL PRODUCE TIME LIMIT EXCEEDED.
*/
#include <iostream>
using namespace std;

/*      SOLVE FUNCTION TO APPLY RECURSION       */
bool solve(string s, string t, int i, string subsequnece)
{
    /*      BASE CASE       */
    if (i > t.length() - 1)
    {
        if (subsequnece == s)
        {
            return true;
        }

        return false;
    }

    /*      INCLUDE CALL        */
    bool includeCall = solve(s, t, i + 1, subsequnece + t[i]);

    /*      EXCLUDE CALL        */
    bool excludeCall = solve(s, t, i + 1, subsequnece);

    /*      CHECKING BOTH CALLS     */
    if (excludeCall || includeCall)
    {
        return true;
    }

    return false;
}

bool isSubsequence(string s, string t)
{
    /*      SOME CORNER CASES       */
    if (t == "" && s == "")
    {
        return true;
    }
    if (t == "" && s != "")
    {
        return false;
    }

    string subsequnece = "";
    return solve(s, t, 0, subsequnece);
}

int main()
{
    /*      CHECKING THAT S IS SUBSTRING OF T OR NOT        */
    string s = "ab";
    string t = "abc";
    cout << isSubsequence(s, t) << endl;

    return 0;
}
