#include <iostream>
using namespace std;

struct TreeNode {
    int info;
    TreeNode* left, * right;
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
        root = buildTree(input, 0, size-1); // this calls your method
    }

private:
    TreeNode* root = nullptr;
    /**
     * Builds a binary using the elements from input[start]
     * to input[end]. So start and end are indices for the array input
     */
    TreeNode* buildTree(int input[], int start, int end) {
        TreeNode *p = new TreeNode;

        int mid = (start + end)/2;
        p->info = input[mid];
        root = p;



        return root;
    }
};



int main() {

    int input[] = {4, 9, 15, 20, 22, 24, 35, 87};
    //1 - create the binary search tree given the sorted input
    BinSearchTree st = BinSearchTree (input,8);
    //2 - print the tree node values inorder
    st.traverseNodes(); // this code was given on Canvas earlier


}