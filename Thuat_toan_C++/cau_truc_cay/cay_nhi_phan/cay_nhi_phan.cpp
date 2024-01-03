#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};
typedef Node *Tree;

Node *CreateNode(int init) {
    Node *p = new Node;
    p->data = init;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void CreateTree(Tree &root) {
    root = NULL;
}

void DestroyTree(Tree &root) {
    if (root) {
        DestroyTree(root->left);
        DestroyTree(root->right);
        delete root;
    }
}

void AddNode(Tree &root, Node *node) {
    if (root) {
        if (root->data == node->data)
            return;
        if (node->data < root->data)
            AddNode(root->left, node);
        else
            AddNode(root->right, node);
    } else {
        root = node;
    }
}

Node *FindNode(Tree root, int x) {
    if (root) {
        if (root->data == x)
            return root;
        if (x < root->data)
            return FindNode(root->left, x);
        return FindNode(root->right, x);
    }
    return NULL;
}

void NLR(Tree root) {
    if (root) {
        cout << root->data << " ";
        NLR(root->left);
        NLR(root->right);
    }
}

void LNR(Tree root) {
    if (root) {
        LNR(root->left);
        cout << root->data << " ";
        LNR(root->right);
    }
}

void LRN(Tree root) {
    if (root) {
        LRN(root->left);
        LRN(root->right);
        cout << root->data << " ";
    }
}

void FindAndReplace1(Tree &p, Tree &tree) {
    while (tree->left) {
        p = tree;
        tree = tree->left;
    }
    p->data = tree->data;
    delete tree;
}

void FindAndReplace2(Tree &p, Tree &tree) {
    while (tree->right) {
        p = tree;
        tree = tree->right;
    }
    p->data = tree->data;
    delete tree;
}

void DeleteNode(Tree &root, int x) {
    if (root) {
        if (x > root->data)
            DeleteNode(root->right, x);
        else if (x < root->data)
            DeleteNode(root->left, x);
        else {
            Node *p = root;
            if (!root->left)
                root = root->right;
            else if (!root->right)
                root = root->left;
            else
                FindAndReplace1(p, root->right);
            delete p;
        }
    } else {
        cout << "Not found!\n";
    }
}

int main() {
    Tree root = NULL;

    AddNode(root, CreateNode(1));
    AddNode(root, CreateNode(2));
    AddNode(root, CreateNode(3));
    AddNode(root, CreateNode(4));
    AddNode(root, CreateNode(5));

    cout << "Inorder: ";
    NLR(root);
    cout << endl;

    cout << "Preorder: ";
    LNR(root);
    cout << endl;

    cout << "Postorder: ";
    LRN(root);
    cout << endl;

    DeleteNode(root, 3);

    cout << "Inorder after deleting 3: ";
    NLR(root);
    cout << endl;

    return 0;
}