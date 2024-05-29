#include <iostream>

using namespace std;

struct node {
    node* left;
    node* right;
    int val;
};

void PostOrdine(node* currNode) {
    if (currNode == NULL)
        return;
    PostOrdine(currNode->left);
    PostOrdine(currNode->right);
    cout << currNode->val << "\n";
}

int main()
{
    return 0;
}
