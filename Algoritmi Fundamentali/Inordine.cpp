// inordine
#include <iostream>

using namespace std;

struct node {
    node* left;
    node* right;
    int val;
};

void InOrdine(node* currNode) {
    if (currNode == NULL)
        return;
    InOrdine(currNode->left);
    cout << currNode->val << "\n";
    InOrdine(currNode->right);
}

void PostOrdine(node* currNode) {
    if (currNode == NULL)
        return;
    PostOrdine(currNode->left);
    PostOrdine(currNode->right);
    cout << currNode->val << "\n";
}

void PreOrdine(node* currNode) {
    if (currNode == NULL)
        return;
    cout << currNode->val << "\n";
    PreOrdine(currNode->left);
    PreOrdine(currNode->right);
}

int main()
{
    return 0;
}
