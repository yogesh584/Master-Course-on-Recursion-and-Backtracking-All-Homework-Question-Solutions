#include <iostream>
using namespace std;

void reverseString(string str, int index, string &ans)
{
    if (index == str.length())
    {
        return;
    }

    reverseString(str, index + 1, ans);

    ans.push_back(str[index]);
}

int main()
{
    string name = "babbar";
    string ans = "";
    reverseString(name, 0, ans);
    cout << ans << endl;
    return 0;
}
