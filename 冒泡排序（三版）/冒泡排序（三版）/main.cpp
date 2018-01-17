//
//  main.cpp
//  冒泡排序（三版）
//
//  Created by 郑祯 on 17/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// Verson1：每次冒一个泡
void bubbleSort1(int *A, int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (A[i] < A[j]) {
                swap(A[i], A[j]);
            }
        }
    }
}

// Version2：在每次冒泡过程中，其他泡也在不同程度地冒
void bubbleSort2(int *A, int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

// Version3：避免了有序之后仍然进行冒泡的情况
void bubbleSort3(int *A, int n) {
    bool isSwap = true;
    for (int i = n - 1; i > 0 && isSwap; i--) {
        isSwap = false;
        for (int j = 0; j < i; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
                isSwap = true;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int A[10] = {2,3,4,1,34,55};
    bubbleSort3(A, 6);
    for (int i = 0; i < 6; i++) {
        cout << A[i] << endl;
    }
    
    return 0;
}
