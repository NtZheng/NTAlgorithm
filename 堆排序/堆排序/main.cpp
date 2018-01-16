//
//  main.cpp
//  堆排序
//
//  Created by 郑祯 on 16/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

void adjustMaxHeap(int *A, int start, int end) {
    for (int current = start, left = start*2 + 1; left <= end; current = left, left = left * 2 + 1) {
        if (left < end && A[left] < A[left + 1]) {
            left++;
        }
        if (A[current] < A[left]) {
            swap(A[current], A[left]);
        } else {
            break;
        }
    }
}

int* heapSort(int *A, int n) {
    // 异常情况
    if (n < 2 || A == NULL) {
        return A;
    }
    // 调整为大顶堆
    for (int i = n/2 - 1; i >= 0; i--) {
        adjustMaxHeap(A, i, n - 1);
    }
    // 排序处理
    for (int i = n - 1; i > 0;) {
        swap(A[0], A[i]);
        adjustMaxHeap(A, 0, --i);
    }
    return A;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
