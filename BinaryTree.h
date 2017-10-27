#ifndef BINARYTREE_H
#define BINARYTREE_H

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

class BinaryTree
{
    public:
        BstNode* getNewNode(int data);
        BstNode* insertBstNode(BstNode* root, int data);
        int minBstNode(BstNode* root);
        int maxBstNode(BstNode* root);
        bool searchTree(BstNode* root, int data);
        int findHeight(BstNode* root);
};
#endif // BINARYTREE_H
