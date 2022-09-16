/*      CHECK IF A BINARY TREE IS A SUM TREE OR NOT     */

/*      BINARY TREE STRUCTURE : (GIVEN TEMP DATA)
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

int isSumTree(Node *root, int &leftSum, int &rightSum)
{
    if (root == NULL)
    {
        return 0;
    }

    int tempLeftSum = isSumTree(root->left, leftSum, rightSum);
    int tempRightSum = isSumTree(root->right, leftSum, rightSum);

    leftSum += tempLeftSum;
    rightSum += tempRightSum;

    return root->data;
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
    int leftSum = 0;
    int rightSum = 0;
    isSumTree(root, leftSum, rightSum);

    cout << leftSum << " " << rightSum << endl;

    cout << endl;
    return 0;
}
