//
//  main.cpp
//  交换两个数
//
//  Created by 郑祯 on 23/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// 交换两个数（异或）
void swap1(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// 交换两个数（加法）
/*
 该方法可能会出现溢出
 */
void swap2(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
