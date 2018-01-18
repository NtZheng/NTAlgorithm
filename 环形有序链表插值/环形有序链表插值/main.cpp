//
//  main.cpp
//  环形有序链表插值
//
//  Created by 郑祯 on 18/01/2018.
//  Copyright © 2018 meituan. All rights reserved.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 环形有序链表插值（原链表是升序的）
ListNode *insert(ListNode *head, int value) {
    // 情况一：原链表为空
    if (head == NULL) {
        ListNode *node = new ListNode(value);
        return node;
    }
    
    // 情况二：如果插入值比头结点小（或等于）
    if (head->val >= value) {
        ListNode *node = new ListNode(value);
        node->next = head;
        return node;
    }
    
    // 情况三：正常插入
    // 能在中间插入
    ListNode *previous = head;
    ListNode *current = head->next;
    while (current != head) {
        if (previous->val >= value && current->val < value) {
            ListNode *node = new ListNode(value);
            previous->next = node;
            node->next = current;
            return head;
        }
        previous = current;
        current = current->next;
    }
    
    // 在结尾插入
    ListNode *node = new ListNode(value);
    previous->next = node;
    node->next = head;
    return head;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
