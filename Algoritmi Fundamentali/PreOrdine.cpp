#include <iostream>

using namespace std;

struct node {
    node* left;
    node* right;
    int val;
};

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
