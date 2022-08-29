/*
    FIND ALL OCCURENCE
        APPROACH 1 : LINEAR SEARCH
*/

#include <iostream>
#include <vector>
using namespace std;

void findAllOccurences(int arr[], int size, int index, int elementToFind, vector<int> &ans)
{
    if (index == size)
    {
        return;
    }

    if (arr[index] == elementToFind)
    {
        ans.push_back(index);
    }

    findAllOccurences(arr, size, ++index, elementToFind, ans);
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
