//
//  main.cpp
//  合法括号序列判断
//
//  Created by 郑祯 on 18/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// 合法扩招序列判断
bool checkIsValidated(string A, int n) {
    // 代表抵消的程度
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == '(') {
            flag++;
        } else {
            flag--;
        }
        // 如果flag < 0代表了：目前右括号多于左括号
        if (flag < 0) {
            return false;
        }
    }
    if (flag == 0) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    string A = "(()))";
    cout << checkIsValidated(A, 5) << endl;
    return 0;
}
