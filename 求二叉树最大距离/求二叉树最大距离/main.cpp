//
//  main.cpp
//  求二叉树最大距离
//
//  Created by 郑祯 on 13/01/2018.
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

// 求二叉树最大距离
int longestDistanceForBinaryTree(TreeNode *root) {
    int leftDistance = 0;
    int rightDistance = 0;
    if (root->left) {
        leftDistance = longestDistanceForBinaryTree(root->left) + 1;
    }
    if (root->right) {
        rightDistance = longestDistanceForBinaryTree(root->right) + 1;
    }
    return leftDistance + rightDistance;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    return 0;
}
