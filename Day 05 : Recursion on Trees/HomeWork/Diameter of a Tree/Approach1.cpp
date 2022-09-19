/*
    DIAMETER OF A TREE.
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

/*      FINDING DIAMETER OF A TREE      */
int solve(Node *root, int &longestPath)
{
    if (root == NULL)
    {
        return 0;
    }

    int count = 1;

    int ans1 = solve(root->left, longestPath);
    int ans2 = solve(root->right, longestPath);

    int tempLongestPath = ans1 + ans2;

    if (tempLongestPath > longestPath)
    {
        longestPath = tempLongestPath;
    }

    if (ans1 > ans2)
    {
        return ans1 + count;
    }
    else
    {
        return ans2 + count;
    }
}

int diameterOfBinaryTree(Node *root)
{
    int longestPath = 0;
    solve(root, longestPath);
    return longestPath;
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

    cout << "Diameter of a tree is : " << diameterOfBinaryTree(root) << endl;

    cout << endl
         << endl
         << endl;
    return 0;
}
