/*
    PRINT ALL PATHS TO LEAF NODE OF A TREE.
    (WORKING TESTED AT LEETCODE ALL TEST CASES ARE PASSED).

    BINARY TREE STRUCTURE : (GIVEN TEMP DATA)
                1
               / \
              /   \
             /     \
            3       5
           / \     / \
          /   \   /   \
         7    11 17    x
        / \  / \ / \
       x   x x x x  x
*/

#include <iostream>
#include <vector>
using namespace std;

/*   CREATING A NODE CLASS    */
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int givenData)
    {
        this->data = givenData;
        this->left = NULL;
        this->right = NULL;
    }
};

/*   BUILDING TREE    */
Node *buildTree(Node *root)
{
    int data;

    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    root->left = buildTree(root->left);

    root->right = buildTree(root->right);

    return root;
}

void solve(Node *root, vector<string> &ans, string s)
{
    if (root == NULL)
    {
        return;
    }

    s.append(to_string(root->data) + "->");

    if (root->left == NULL && root->right == NULL)
    {
        s.pop_back();
        s.pop_back();
        ans.push_back(s);
    }
    else
    {
        solve(root->left, ans, s);
        solve(root->right, ans, s);
    }
}
/*      FUNCTION TO FIND ALL LEAF PATHS     */
vector<string> binaryTreePaths(Node *root)
{
    vector<string> ans;
    if (root == NULL)
    {
        return ans;
    }

    string s;

    solve(root, ans, s);

    return ans;
}

/*      PRINTING THE ARRAY      */
void printArray(vector<string> arr)
{
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    cout << endl
         << endl
         << endl;

    /*      TEMP INPUT TO RUN PROGRAME
            1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1      */

    Node *root = NULL;
    cout << "Enter the Tree : ";
    root = buildTree(root);

    /*      FINDING ALL PATHS TO LEAF PATHS        */
    vector<string> ans = binaryTreePaths(root);

    cout << endl
         << "All Leaf paths are : " << endl;

    printArray(ans);

    cout << endl
         << endl
         << endl;
    return 0;
}
