//
//  main.cpp
//  快速N次方
//
//  Created by 郑祯 on 22/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

// 快速N次方（k的N次方）
int getResult(int k, int N) {
    int result = 1;
    int temp = k;
//    int m = 10000007;
    while (N > 0) {
        if ((N & 1) != 0) {
            result = result * temp;
        }
        temp = temp * temp;
//        temp = temp % m;
//        result = result % m;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    return 0;
}
