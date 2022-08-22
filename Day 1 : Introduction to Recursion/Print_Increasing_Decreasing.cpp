/*
    LOGIC :
        We use two arguments first is given number but its not changing by recursion call and Second Argument is also give number n but we are changing it by recursion.
        You Will Understant it more by dry run.
*/

/*
    DRY RUN :
        Round 1 :
            First The Value of n and changableN is 5,5.
            We are printing n - changableN + 1 (from line 32) means 5 - 5 + 1 that is : 1;
            Now Because of Recursion Call changableN Becomes 4
            So We are printing n - changableN + 1 (from line 32) means 5 - 4 + 1 that is : 2
            Again Because of Recursive Call changableN Becomes 3 and we print 5 - 3 + 1 that is : 3
            Again Because of Recursive Call changableN Becomes 2 and we print 5 - 2 + 1 that is : 4
            Again Because of Recursive Call changableN Becomes 1 and we print 5 - 1 + 1 that is : 5
            Now ChangableN bacomes 0 (Base Case is reached) so we we will return from recursion calls.
            Now line 37 will executed and print 1 2 3 4 5.
*/

#include <iostream>
using namespace std;

void print(int n, int changableN)
{
    // Base case :
    if (changableN == 0)
    {
        return;
    }

    cout << n - changableN + 1 << " ";

    // Recurence Relation.
    print(n, changableN - 1);

    cout << n - changableN + 1 << " ";
}

int main()
{
    cout << endl
         << endl;

    // Recursive Function Call.
    print(5, 5);

    cout << endl
         << endl;
    return 0;
}

// I Hope This will help you.