//
//  main.cpp
//  求树中两个节点的最短路径
//
//  Created by 郑祯 on 30/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

// 求数中两个节点的最短路径
vector<TreeNode *> findClosestPath(TreeNode *root, TreeNode *A, TreeNode *B) {
    if (root == NULL) {
        vector<TreeNode *> temp;
        return temp;
    }
    
    vector<TreeNode *> leftPath = findClosestPath(root->left, A, B);
    vector<TreeNode *> rightPath = findClosestPath(root->right, A, B);

    // 情况一：如果左右均为空
    if (leftPath.empty() && rightPath.empty()) {
        // 1.1：根节点为目标节点，则新开一条路径
        if (root == A || root == B) {
            vector<TreeNode *> newPath;
            newPath.push_back(root);
            return newPath;
            // 1.2：根节点不是目标节点
        } else {
            return leftPath; // or rightPath
        }
        // 情况二：左右都不为空，则根节点为最近公共子节点，合并两条路径
    } else if (!leftPath.empty() && !rightPath.empty()) {
        leftPath.push_back(root);
        reverse(rightPath.begin(), rightPath.end());
        leftPath.insert(leftPath.end(), rightPath.begin(), rightPath.end());
        return leftPath;
        // 情况三：左不为空
    } else if (!leftPath.empty()) {
        leftPath.push_back(root);
        return leftPath;
    } else {
        // 情况四：右不为空
        rightPath.push_back(root);
        return rightPath;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
