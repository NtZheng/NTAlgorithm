//
//  main.cpp
//  比较两个数
//
//  Created by 郑祯 on 24/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// 获取符号值(0表示正数，1表示负数)
int sign(int n) {
    return (n >> 31) & 1;
}

int reverseFlag(int n) {
    return n ^ 1;
}

// 比较两个数
int getMax(int a, int b) {
    int c = a - b;
    int flag = sign(c);
    int rFlag = reverseFlag(flag);
    return a * rFlag + b * flag;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 10;
    int b = 5;
    cout << getMax(a, b) << endl;
    return 0;
}
