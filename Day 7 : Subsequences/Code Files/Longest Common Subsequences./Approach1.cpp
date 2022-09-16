/*
    LONGEST COMMON SUBSEQUNCES.
        APPROACH 1 :
*/
#include <iostream>
using namespace std;

int LCS(string a, string b, int i, int j)
{
    /*      BASE CASE       */
    if (i == a.length())
        return 0;

    if (j == b.length())
        return 0;

    int ans = 0;

    /*     MATCH        */
    if (a[i] == b[j])
    {
        ans = 1 + LCS(a, b, i + 1, j + 1);
    }
    else
    {
        ans = max(LCS(a, b, i, j + 1), LCS(a, b, i + 1, j));
    }
    return ans;
}

int main()
{

    string x = "abcde";
    string y = "ace";

    int i = 0;
    int j = 0;
    int ans = LCS(x, y, i, j);
    cout << "Longest Common Substring is : " << ans << endl;

    return 0;
}