/*
    HEIGHT OF THE TREE
    APPROACH 1 :
        BY USING COUNT VARIABLE

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
/*      FINDING HEIGHT OF TREE      */
int heightOfTree(Node *root, int count)
{
    /* BASE CASE */
    if (root == NULL)
    {
        return count;
    }

    /*      GOING TO LEFT PART      */
    int leftPartMaxHeight = heightOfTree(root->left, count + 1);

    /*      GOING TO RIGHT PART     */
    int rightPartMaxHeight = heightOfTree(root->right, count + 1);

    return max(leftPartMaxHeight, rightPartMaxHeight);
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

    /*  CALLING HEIGHT OF TREE FUNCTION  */
    cout << "Max Height of Tree is : " << heightOfTree(root, 0);

    cout << endl
         << endl
         << endl;
    return 0;
}
