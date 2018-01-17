//
//  main.cpp
//  判断是否为旋转词
//
//  Created by 郑祯 on 17/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

// 判断是否为旋转词
bool isRotatedWord(string A, int lenghtA, string B, int lenghtB) {
    // 字数不等
    if (lenghtA != lenghtB) {
        return false;
    }
    
    string C = A + A;
    return C.find(B) == -1 ? false : true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
