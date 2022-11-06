/*
name : Panduranga Sai Guptha
topic: insertion and inorder of binary search tree
*/
#include <iostream>
using namespace std;
class node
{
public:
     int key;
     node *left, *right;
};
node *newnode(int key)
{
     node *temp = new node();
     temp->key = key;
     temp->left = temp->right = NULL;
     return temp;
}
node *insert(node *root, int key)
{
     if (root == NULL)
          return newnode(key);
     if (key < root->key)
          root->left = insert(root->left, key);
     else
     {
          root->right = insert(root->right, key);
     }
     return root;
}
void inorder(node *root)
{
     if (root != NULL)
     {
          inorder(root->left);
          cout << root->key << "->";
          inorder(root->right);
     }
}
int main()
{
     node *root;
     cout << "enter the number of elements to be inserted :"
          << " ";
     int n;
     cin >> n;
     cout << endl;
     for (int i = 0; i < n; i++)
     {
          cout << "enter the element " << i + 1 << " ";
          int data;
          cin >> data;
          root = insert(root, data);
          cout << "\n";
     };
     cout << "inorder of the binary search tree:" << endl;
     inorder(root);
}