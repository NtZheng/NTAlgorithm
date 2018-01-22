//
//  main.cpp
//  链表删除单个节点
//
//  Created by 郑祯 on 21/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 删除单个节点
ListNode *deleteNode(ListNode *head, int val) {
    // 删除的是头结点
    if (head->val == val) {
        ListNode *newHead = head->next;
        head->next = NULL;
        return newHead;
    }
    
    // 正常删除
    ListNode *previous = head;
    ListNode *current = head->next;
    while (current != NULL) {
        if (current->val == val) {
            previous->next = current->next;
            current->next = NULL;
        }
        previous = previous->next;
        current = current->next;
    }
    return head;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
