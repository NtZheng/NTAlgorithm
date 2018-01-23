//
//  main.cpp
//  交换两个数
//
//  Created by 郑祯 on 23/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// 交换两个数（不采用临时变量）
void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
