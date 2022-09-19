/*
    CHECK IF TWO BINARY TREES ARE MIRROR
    APPROACH 1 :

    FIRST BINARY TREE STRUCTURE (GIVEN IN TEMP DATA) :
                1
               / \
              /   \
             /     \
            3       5
           / \     / \
          /   \   /   \
         7    11 17    x
        / \  / \ / \
       x   x x x x x

    SECOND BINARY TREE STRUCTURE (GIVEN IN TEMP DATA) :
                1
               / \
              /   \
             /     \
            5       3
           / \     / \
          /   \   /   \
         x    17  7   11
             / \ / \ /  \
             x x x x x   x
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
/*       CHECKING ARE BOTH TREES MIRROR OR NOT.        */
bool isMirrorTrees(Node *root1, Node *root2)
{
    /*      BASE CASE        */
    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL && root2 != NULL)
        return false;

    if (root1 != NULL && root2 == NULL)
        return false;

    if (root1->data != root2->data)
        return false;

    /*      RECURENCE RELATION       */
    bool leftResult = isMirrorTrees(root1->left, root2->right);
    bool rightResult = isMirrorTrees(root1->right, root2->left);

    /*      RETURNING ANSWER      */
    return leftResult && rightResult;
}

int main()
{

    cout << endl
         << endl
         << endl;

    /*      TEMP INPUT TO RUN PROGRAME FOR FIRST TREE
            1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

            TEMP INPUT TO RUN PROGRAME FOR SECOND TREE
            1 5 -1 17 -1 -1 3 11 -1 -1 7 -1 -1               */

    /*      CREATING TWO BINARY TREES     */
    Node *root1 = NULL;
    cout << "Enter Your Tree 1 : ";
    root1 = buildTree(root1);

    Node *root2 = NULL;
    cout << "Enter Your Tree 2 : ";
    root2 = buildTree(root2);

    cout << endl
         << endl;

    /*      CHECKING        */
    if (isMirrorTrees(root1, root2))
    {
        cout << "Both Trees Are Mirror" << endl;
    }
    else
    {
        cout << "Bot Trees Are Not Mirror" << endl;
    }

    cout << endl
         << endl
         << endl;

    return 0;
}
