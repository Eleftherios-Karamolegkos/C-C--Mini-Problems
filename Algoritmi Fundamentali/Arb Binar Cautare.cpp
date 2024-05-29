#include <iostream>
#include <queue>

using namespace std;

struct node {
    node* left;
    node* right;
    node* parent;
    int val;
};

// Creaza un arbore binar de cautare, insa ar putea sa nu ii mentina echilibrul
node* Insert(node * currNode, int val)
{

    if(currNode == NULL)
    {
        currNode = new node;
        currNode->val = val;
        currNode->left = NULL;
        currNode->right = NULL;
        currNode->parent = NULL;
    }

    else if(currNode->val > val)
    {
        currNode->left = Insert(currNode->left, val);
        currNode->left->parent = currNode;
    }
    else
    {
        currNode->right = Insert(currNode->right, val);
        currNode->right->parent = currNode;
    }

    return currNode;
}

int n;

int main()
{
    cout << "Numar noduri: "; cin >> n;

    int x;
    node* root;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i == 1)
            root = Insert(NULL, x);
        else
            Insert(root, x);
    }

    queue< pair<node* , int> > Q;
    Q.push( {root, 1} );

    int currLvl = 0;
    while ( !Q.empty() ) {
        node* currNode = Q.front().first;
        int lvl = Q.front().second;
        Q.pop();

        if (lvl > currLvl) {
            cout << "\n";
            currLvl = lvl;
        }

        if (currNode == NULL)
            cout << "- ";
        else {
            cout << currNode->val << " ";
            Q.push( {currNode->left, currLvl+1} );
            Q.push( {currNode->right, currLvl+1} );
        }
    }
    return 0;
}
