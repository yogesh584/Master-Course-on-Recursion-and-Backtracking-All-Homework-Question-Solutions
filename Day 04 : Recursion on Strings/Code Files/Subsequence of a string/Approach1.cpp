/*
    SUBSEQUENCE IS LIKE POWER SET
        APPROACH 1 :
*/

#include <iostream>
#include <vector>
using namespace std;

void printSubSequences(string str, int index, string ans)
{
    // Base Case
    if (index == str.length())
    {
        cout << ans << endl;
        return;
    }
    // include
    printSubSequences(str, index + 1, ans + str[index]);

    // exclude
    printSubSequences(str, index + 1, ans);
}

int main()
{
    printSubSequences("ab", 0, "");
    return 0;
}