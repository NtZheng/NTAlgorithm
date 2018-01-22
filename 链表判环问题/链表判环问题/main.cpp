//
//  main.cpp
//  链表判环问题
//
//  Created by 郑祯 on 22/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

using namespace std;

// 链表判环（无环返回-1，有环返回进入环的节点值）
int judgeCircle(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return -1;
    }
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            fast = head;
            while (fast != slow) {
                fast = fast->next;
                slow = slow->next;
            }
            return fast->val;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
