/*
    CONVERT A TREE INTO ITS MIRROR.
        APPROACH 1 :
            TESTED AT CODESTUDIO (ALL TEST CASE PASSED.)

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
#include <queue>
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

/*      LEVEL ORDER TRAVERSAL CODE FOR TRAVERSE THE TREE        */
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

/*      CONVERTING A TREE INTO ITS MIRROR        */
void mirrorTree(Node *&root)
{
    if (root == NULL)
    {
        return;
    }

    swap(root->left, root->right);

    mirrorTree(root->left);
    mirrorTree(root->right);
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

    cout << endl;

    cout << "Before Tree : " << endl;
    levelOrderTraversal(root);

    cout << endl;

    /*      FINDING MIRROR OF TREE      */
    mirrorTree(root);

    cout << "After Tree : " << endl;
    levelOrderTraversal(root);

    cout << endl
         << endl
         << endl;
    return 0;
}
