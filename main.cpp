#include <iostream>
using namespace std;

struct TreeNode {
    int info;
    TreeNode* left, *right;
};

class BinSearchTree {
public:

    TreeNode * getRoot() {
        return root;
    }
    int getRootInfo() {
        return root->info;
    }


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


// constructor
    BinSearchTree(int input[], int size) {
        // edited to size - 1 so that end = the last index of input array
        root = buildTree(input, 0, size - 1); // this calls your method
    }

private:
    TreeNode* root = nullptr;

    /**
     * Builds a binary using the elements from input[start]
     * to input[end]. So start and end are indices for the array input
     */
    TreeNode* buildTree(int input[], int start, int end) {

        // Base case
        if (start > end) {
            return nullptr;
        }
        // find the mid of array in every recursive call
        int mid = (start + end) / 2;

        TreeNode* p = new TreeNode;
        p->info = input[mid];

        // recursive call to make left subtree
        p->left = buildTree(input, start, mid - 1);
        // recursive call to make right subtree
        p->right = buildTree(input, mid + 1, end);
        return p;

    }


}; // end of class


int main() {

    int input[] = {4, 9, 15, 20, 22, 24, 35, 87};
    //1 - create the binary search tree given the sorted input
    BinSearchTree st = BinSearchTree (input,8);
    //2 - print the tree node values inorder
    st.traverseNodes(); // this code was given on Canvas earlier


}

