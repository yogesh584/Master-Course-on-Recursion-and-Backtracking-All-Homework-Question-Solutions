/*
    POSTORDER TRAVERSAL
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

/*      POSTORDER TRAVERSAL CODE        */
void postOrderTraversal(Node *root)
{
    /*    BASE CASE    */
    if (root == NULL)
    {
        return;
    }

    /*  GOING TO LEFT PART (L OPERATION)  */
    postOrderTraversal(root->left);

    /* GOING TO RIGHT PART (R OPERATION)  */
    postOrderTraversal(root->right);

    /*  PRINTING DATA (N OPERATION)       */
    cout << root->data << " ";
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

    /*  CALLING POSTORDER FUNCTION  */
    postOrderTraversal(root);

    cout << endl
         << endl
         << endl;
    return 0;
}
