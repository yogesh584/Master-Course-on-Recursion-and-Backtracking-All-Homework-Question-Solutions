/*
    FIND ALL OCCURENCES
        APPROACH 2 : DECRESING THE SIZE OF ARRAY.
*/

#include <iostream>
#include <vector>
using namespace std;

void findAllOccurences(int arr[], int size, int index, int elementToFind, vector<int> &ans)
{
    if (size == 0)
    {
        return;
    }

    if (arr[0] == elementToFind)
    {
        ans.push_back(index);
    }

    findAllOccurences(arr + 1, size - 1, index + 1, elementToFind, ans);
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    cout << endl
         << endl;
    int myarray[] = {0, 7, 1, 9, 2, 4, 2};
    int size = 7;
    int index = 0;
    int elementToSearch = 2;

    vector<int> ans;

    findAllOccurences(myarray, size, index, elementToSearch, ans);

    cout << "Occurences are : ";
    printVector(ans);

    cout << endl
         << endl
         << endl;
    return 0;
}
