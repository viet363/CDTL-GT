//khai bao cau truc du lieu cay nhi phan 
#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};
void insertNode(TreeNode*& root, int value) {
    if (root == NULL) {
        root = new TreeNode;
        root->data = value;
        root->left = NULL;
        root->right = NULL;
    }
    else if (value < root->data) {
        insertNode(root->left, value);
    }
    else {
        insertNode(root->right, value);
    }
}
void printTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main() {
    TreeNode* root = NULL;
    int arr[] = { 5, 3, 7, 1, 4, 6, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        insertNode(root, arr[i]);
    }
}
