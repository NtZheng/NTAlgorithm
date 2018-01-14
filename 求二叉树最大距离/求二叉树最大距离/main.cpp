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
int getDeepth(TreeNode *root, int &result) {
    if (root == NULL) {
        return 0;
    }
    int leftDeepth = getDeepth(root->left, result);
    int rightDeepth = getDeepth(root->right, result);
    result = max(result, leftDeepth + rightDeepth + 1);
    return max(leftDeepth, rightDeepth) + 1;
}

int longestDistance(TreeNode *root) {
    int result = 0;
    getDeepth(root, result);
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    return 0;
}
