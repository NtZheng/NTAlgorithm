//
//  main.cpp
//  句子逆序
//
//  Created by 郑祯 on 17/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

// 句子逆序
void reverse(string &A, int left, int right) {
    while (left < right) {
        swap(A[left++], A[right--]);
    }
    
}

string reverseString(string A, int n) {
    // 将整体逆序
    reverse(A, 0, n - 1);
    
    // 每个单词再逆序
    int begin = 0;
    for (int i = 0; i <= n; i++) {
        if (A[i] == ' ' || A[i] == '\0') {
            reverse(A, begin, i - 1);
            begin = i + 1;
        }
    }
    return A;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    string A = "wo shi nineteen";
    cout << reverseString(A, 15) << endl;
    return 0;
}
