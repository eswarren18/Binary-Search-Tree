#include <cstdlib>
#include <iostream>

#include "BinaryTree.h"

using namespace std;

BstNode* BinaryTree::getNewNode(int data)
{
    BstNode* newNode = new BstNode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
BstNode* BinaryTree::insertBstNode(BstNode* root, int data)
{
    if(root == NULL)
    {
        root = getNewNode(data);
    }
    else if(data <= root->data)
    {
        root->left = insertBstNode(root->left,data);
    }
    else
    {
        root->right = insertBstNode(root->right,data);
    }
    return root;
}

int BinaryTree::minBstNode(BstNode* root)
{
    if(root == NULL)
    {
        cout << "Tree is empty\n";
        return -1;
    }
    else if(root->left == NULL)
    {
        return root->data;
    }
    return minBstNode(root->left);
}

int BinaryTree::maxBstNode(BstNode* root)
{
    if(root == NULL)
    {
        cout << "Tree is empty\n";
        return -1;
    }
    else if(root->right == NULL)
    {
        return root->data;
    }
    return maxBstNode(root->right);
}

bool BinaryTree::searchTree(BstNode* root, int data)
{
    if(root == NULL)
    {
        return false;
    }
    else if(data == root->data)
    {
        return true;
    }
    else if(data <= root->data)
    {
        return searchTree(root->left,data);
    }
    else
    {
        return searchTree(root->right,data);
    }
}

int BinaryTree::findHeight(BstNode* root)
{
    if(root == NULL)
    {
        return -1;
    }
    return max(findHeight(root->left),findHeight(root->right)) + 1;
}
