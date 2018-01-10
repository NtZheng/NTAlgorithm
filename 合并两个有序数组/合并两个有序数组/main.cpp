//
//  main.cpp
//  合并两个有序数组
//
//  Created by 郑祯 on 10/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

// 合并两个有序数组
int* mergeAB(int* A, int* B, int n, int m) {
    // write code here
    int indexA = n - 1;
    int indexB = m - 1;
    int indexC = n + m - 1;
    while (indexA >= 0 && indexB >=0) {
        if (A[indexA] > B[indexB]) {
            A[indexC--] = A[indexA--];
        } else {
            A[indexC--] = B[indexB--];
        }
    }
    
    while (indexA >= 0) {
        A[indexC--] = A[indexA--];
    }
    
    while (indexB >= 0) {
        A[indexC--] = B[indexB--];
    }
    
    return A;
}

int main(int argc, const char * argv[]) {
    
    int A[10] = {1, 2, 3, 4, 5};
    int B[5] = {2, 3, 5, 7, 9};
    int* C = mergeAB(A, B, 5, 5);
    for (int i = 0; i < 10; i++) {
        cout << C[i] << endl;
    }
    
    return 0;
}


