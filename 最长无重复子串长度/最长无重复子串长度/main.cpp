//
//  main.cpp
//  最长无重复子串长度
//
//  Created by 郑祯 on 18/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// 最长无重复子串长度
int lengthForLongestSubString(string A, int n) {
    // 存储字符最后出现的位置
    int *lastPosition = new int[256];
    for (int i = 0; i < 256; i++) {
        lastPosition[i] = -1;
    }
    
    // 动态规划过程
    int previous = -1; // 最大无重复子串的左节点位置（不包含该点）
    int currentLength = 0;
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        // 动规关键：左节点位置为“上一个最大无重复子串左节点”和“新遍历到的节点最后出现的位置”中最大值
        previous = max(previous, lastPosition[A[i]]);
        currentLength = i - previous;
        maxLength = max(maxLength, currentLength);
        lastPosition[A[i]] = i; // 维护
    }
    return maxLength;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    string A = "woshinineteen";
    cout << lengthForLongestSubString(A, 13) << endl;
    return 0;
}
