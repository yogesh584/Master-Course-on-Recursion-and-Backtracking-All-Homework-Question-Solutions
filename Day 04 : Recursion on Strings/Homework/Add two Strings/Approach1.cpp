/*
    ADD TWO STRINGS WITHOUT MODULO OPERATOR.
        APPROACH 1 :
*/
#include <iostream>
#include <algorithm>
using namespace std;

int getRemainder(int num, int divisor)
{
    return (num - divisor * (num / divisor));
}

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

    int lastDigit = getRemainder(sum, 10);
    carry = sum / 10;

    ans.push_back(lastDigit + '0');

    // Recurence Relation.
    addStrings(s1, s2, i - 1, j - 1, carry, ans);
}

int main()
{
    cout << endl
         << endl
         << endl;
    string s1 = "345";
    string s2 = "45";
    string ans = "";

    // Printing Both Numbers as Strings.
    cout << "First Number is : " << s1 << endl;
    cout << "Second Number is : " << s2 << endl;

    // Finding Sum of Both Strings.
    addStrings(s1, s2, s1.length() - 1, s2.length() - 1, 0, ans);

    // Finding Reverse of Answer.
    reverse(ans.begin(), ans.end());

    // Printing Answer.
    cout << "Sum is : " << ans << endl;

    cout << endl
         << endl;
    return 0;
}
