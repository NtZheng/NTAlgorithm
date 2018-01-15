//
//  main.cpp
//  快速排序
//
//  Created by 郑祯 on 15/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// 快速排序
int partition(int *A, int left, int right) {
    int flag = A[left];
    while (left < right) {
        while (A[right] >= flag && left < right) {
            right--;
        }
        swap(A[left], A[right]);
        while (A[left] < flag && left < right) {
            left++;
        }
        swap(A[left], A[right]);
    }
    return left;
}

void quickSort(int *A, int left, int right) {
    if (left < right) {
        int middle = partition(A, left, right);
        quickSort(A, left, middle - 1);
        quickSort(A, middle + 1, right);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
