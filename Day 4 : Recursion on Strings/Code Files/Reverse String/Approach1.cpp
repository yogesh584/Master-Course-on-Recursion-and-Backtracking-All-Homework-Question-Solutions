/*
    REVERSE STRINGS
        APPROACH 1 :
*/
#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    swap(str[start], str[end]);

    reverseString(str, ++start, --end);
}

int main()
{
    string name = "babbar";
    cout << name << endl;
    reverseString(name, 0, 5);
    cout << name << endl;
    return 0;
}
