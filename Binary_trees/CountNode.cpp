#include<iostream>
#include<vector>
using namespace std;

class Node {

public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }

};

static int idx = -1;

Node* Build_tree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = Build_tree(nodes);
    currNode->right = Build_tree(nodes);

    return currNode;
}

int count(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = count(root->left);
    int rightHeight = count(root->right);
    return leftHeight + rightHeight + 1;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = Build_tree(nodes);

    cout << count(root) << endl;

    return 0;
}