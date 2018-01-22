//
//  main.cpp
//  打印二叉树（递归和非递归）
//
//  Created by 郑祯 on 22/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <stack>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

using namespace std;
/*
 都以中序遍历作为示例（在非递归方式中，前中后三种遍历方式有逻辑上的差别）
 */
// 递归打印二叉树
void recursion(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    recursion(root->left);
    cout << root->val << endl;
    recursion(root->right);
}

// 非递归打印二叉树
void non_recursion(TreeNode *root) {
    stack<TreeNode *> stack;
    TreeNode *current = root;
    while (!stack.empty() || current != NULL) {
        if (current != NULL) {
            stack.push(current);
            current = current->left;
        } else {
            current = stack.top();
            cout << current->val << endl;
            stack.pop();
            current = current->right;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
