#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int data = 0) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree {
public:
    Node *rootTree;

    Tree() {
        rootTree = NULL;
    }

    Node *insert_bst(Node *, int);

    void preOrder(Node *);

    void inOrder(Node *);

    void postOrder(Node *);
};

Node *Tree::insert_bst(Node *root, int num) {
    if (root == NULL) {
        Node *newnode = new Node(num);
        root = newnode;
    } else if (num < root->data) {
        root->left = insert_bst(root->left, num);
    } else
        root->right = insert_bst(root->right, num);
    return root;
}


void Tree::preOrder(Node *root) {
    if (root != NULL) {
        cout << "Data: " << root->data << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void Tree::inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << "Data: " << root->data << endl;
        inOrder(root->right);
    }
}

void Tree::postOrder(Node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << "Data: " << root->data << endl;
    }
}


int main() {
    Tree bst;
    int v;
    cin >> v;
    bst.rootTree = bst.insert_bst(bst.rootTree, v);
    cin >> v;
    bst.rootTree = bst.insert_bst(bst.rootTree, v);
    cin >> v;
    bst.rootTree = bst.insert_bst(bst.rootTree, v);
    cin >> v;
    bst.rootTree = bst.insert_bst(bst.rootTree, v);
    cout << "Preorder:" << endl;
    bst.preOrder(bst.rootTree);
    cout << "Inorder:" << endl;
    bst.inOrder(bst.rootTree);
    cout << "Postorder:" << endl;
    bst.postOrder(bst.rootTree);
    return 0;
}