/*
    ADD TWO STRINGS.
*/
#include <iostream>
#include <algorithm>
using namespace std;

void addStrings(string s1, string s2, int i, int j, int carry, string &ans)
{

    // Base Case
    if (i < 0 && j < 0 && carry == 0)
    {
        return;
    }

    int first = 0;
    int second = 0;

    if (i >= 0)
        first = s1[i] - '0';
    if (j >= 0)
        second = s2[j] - '0';

    int sum = first + second + carry;

    int lastDigit = sum % 10;
    carry = sum / 10;

    ans.push_back(lastDigit + '0');

    addStrings(s1, s2, i - 1, j - 1, carry, ans);
}

int main()
{
    string s1 = "345";
    string s2 = "5";
    string ans = "";

    addStrings(s1, s2, s1.length() - 1, s2.length() - 1, 0, ans);
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}
