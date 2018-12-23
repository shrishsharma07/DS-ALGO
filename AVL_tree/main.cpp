#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
    Node(int data)
    {
        this->data = data;
        this->height = 1;
        left = right = NULL;

    }
};

int Get_height(struct Node *node)
{
    if(node == NULL) return 0;

    return node->height;

}

void inorder_traversal(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout << root->data << " " << root->height << endl;
    inorder_traversal(root->right);
}
void preorder_traversal(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " " << root->height << endl;
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
struct Node* Update_root_height(struct Node *node)
{
    if (node->left && node->right)
    {
    node->height = max(node->left->height,node->right->height) + 1;
    }
    else if (node->left)
    {
    node->height = Get_height(node->left) + 1;
    }
    else
    {
    node->height = Get_height(node->right) + 1;
    }

}
struct Node* Rotate_right(struct Node *root)
{
    struct Node *new_root = root->left;
    root->left = new_root->right;
    new_root->right = root;
    Update_root_height(root);
    Update_root_height(new_root);

    return new_root;
}
int Height_Diffrence(struct Node *node)
{
    if (node->left && node->right)
    return node->left->height - node->right->height;

    if(node->left)
    return node->left->height;

    if(node->right)
    return node->right->height*-1;

}
struct Node* Rotate_left(struct Node *root)
{
    struct Node *new_root = root->right;
    root->right = new_root->left;
    new_root->left = root;
    Update_root_height(root);
    Update_root_height(new_root);

    return new_root;
}
struct Node* Insert_node(struct Node *node,int Inserting_data)
{
    if(!node)
    {
        return new Node(Inserting_data);
    }

    if (Inserting_data > node->data)
    {
        node->right = Insert_node(node->right,Inserting_data);
    }
    else
    {
        node->left = Insert_node(node->left,Inserting_data);
    }

    if(Height_Diffrence(node) > 1)
    {
       // cout << "At" << node->data << "Height Diffrence is " << Height_Diffrence(node) << endl;
        if (Height_Diffrence(node->left) < 0)
        node->left = Rotate_left(node->left);

        node = Rotate_right(node);
    }
    if(Height_Diffrence(node) < -1)
    {
        cout << "At" << node->data << "Height Diffrence is " << Height_Diffrence(node) << endl;
        if (Height_Diffrence(node->right) > 0)
        node->right = Rotate_right(node->right);

        node = Rotate_left(node);


    }
    Update_root_height(node);

    return node;

}

int main()
{
    cout << "Hello world!" << endl;
    struct Node *root = NULL;
    root = Insert_node(root,10);
    root = Insert_node(root,20);
    root = Insert_node(root,30);
    root = Insert_node(root,40);
    root = Insert_node(root,50);
    root = Insert_node(root,25);

    preorder_traversal(root);
    cout << endl;

    return 0;
}
