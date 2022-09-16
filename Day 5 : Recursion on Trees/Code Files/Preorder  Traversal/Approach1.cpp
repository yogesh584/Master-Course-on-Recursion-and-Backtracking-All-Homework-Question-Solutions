/*
    PREORDER TRAVERSAL
        APPROACH 1 :

    BINARY TREE STRUCTURE : (BY GIVEN TEMP DATA)
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

/*      PREORDER TRAVERSAL CODE        */
void preOrderTraversal(Node *root)
{
    /*    BASE CASE    */
    if (root == NULL)
    {
        return;
    }

    /*  PRINTING DATA (N OPERATION)       */
    cout << root->data << " ";

    /*  GOING TO LEFT PART (L OPERATION)  */
    preOrderTraversal(root->left);

    /* GOING TO RIGHT PART (R OPERATION)  */
    preOrderTraversal(root->right);
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

    /*  CALLING PREORDER FUNCTION  */
    preOrderTraversal(root);

    cout << endl
         << endl
         << endl;
    return 0;
}
