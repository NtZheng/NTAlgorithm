//
//  main.cpp
//  最近公共父节点
//
//  Created by 郑祯 on 10/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

// 找最近公共父节点
TreeNode* findClosestParent(TreeNode *A, TreeNode *B, TreeNode *root) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root == A || root == B) {
        return root;
    }
    
    TreeNode *leftNode = findClosestParent(A, B, root->left);
    TreeNode *rightNode = findClosestParent(A, B, root->right);

    if (leftNode != NULL && rightNode != NULL) {
        return root;
    }
    
    if (leftNode != NULL) {
        return leftNode;
    }
    
    if (rightNode != NULL) {
        return rightNode;
    }
    
    return NULL;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
