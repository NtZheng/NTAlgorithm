//
//  main.cpp
//  反转二叉树
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

// 反转二叉树
TreeNode *reverseBinaryTree(TreeNode *root) {
    
    // 终止条件
    if (root == NULL) {
        return NULL;
    }
    
    root->left = reverseBinaryTree(root->left);
    root->right = reverseBinaryTree(root->right);
    
    TreeNode *tempNode = root->left;
    root->left = root->right;
    root->right = tempNode;
    
    return root;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
