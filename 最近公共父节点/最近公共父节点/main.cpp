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

// 找最近公共父节点（思路一）
TreeNode* findClosestParent1(TreeNode *A, TreeNode *B, TreeNode *root) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root == A || root == B) {
        return root;
    }
    
    TreeNode *leftNode = findClosestParent1(A, B, root->left);
    TreeNode *rightNode = findClosestParent1(A, B, root->right);

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

// 找最近公共父节点（思路二）
TreeNode *findClosestParent2(TreeNode *A, TreeNode *B, TreeNode *root) {
    if (root == NULL) {
        return NULL;
    }
    TreeNode *currentLeft = findClosestParent1(A, B, root->left);
    TreeNode *currentRight = findClosestParent1(A, B, root->right);
    // 情况一：左右都为空
    if (currentLeft == NULL && currentRight == NULL) {
        // 1.1：root为目标节点
        if (root == A || root == B) {
            return root;
            // 1.2：root不为目标节点
        } else {
            return NULL;
        }
        // 情况二：左边右边都不为空
    } else if (currentLeft != NULL && currentRight != NULL) {
        return root;
        // 情况三：左边不为空，右边为空
    } else if (currentLeft != NULL) {
        return currentLeft;
        // 情况四：左边为空，右边不为空
    } else {
        return currentRight;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
