//
//  main.cpp
//  寻找出现奇数次的数
//
//  Created by 郑祯 on 24/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/*
 只有一个数出现奇数次，其他书出现偶数次，时间复杂度为O（n），控件复杂度为O（1）
 */

int findOdd(vector<int> A, int n) {
    int result = A[0];
    for (int i = 1; i < n; i++) {
        result = result ^ A[i];
    }
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> A;
    A.push_back(4);
    A.push_back(4);
    A.push_back(3);
    A.push_back(3);
    A.push_back(0);
    A.push_back(0);
    A.push_back(1);
    
    cout << findOdd(A, 7) << endl;
    
    return 0;
}
