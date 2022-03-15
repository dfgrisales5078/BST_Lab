#include <iostream>

struct TreeNode {
    int info;
    TreeNode* left, * right;
};

class BinSearchTree {
public:

    // traversal
    void traverseNodes() {
        traverseNodes(root); // call the traversal with the root, which is private
    }

    void traverseNodes(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        traverseNodes(root->left);
        std::cout << root->info << " ";
        traverseNodes(root->right);
    }


    BinSearchTree(int input[], int size) {
        root = buildTree(input, 0, size-1); // this calls your method
    }

private:
    TreeNode* root = nullptr;
    /**
     * Builds a binary using the elements from input[start]
     * to input[end]. So start and end are indices for the array input
     */
    TreeNode* buildTree(int input[], int start, int end) {
        TreeNode *p = root;
        TreeNode *q = nullptr;

        if (p == nullptr) {

        }
    }
};



int main() {

}