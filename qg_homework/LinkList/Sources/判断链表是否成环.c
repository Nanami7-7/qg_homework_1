#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int hasCycle(LinkNode* head) 
{
    if (head == NULL || head->next == NULL) 
    {
        return 0; // 空链表或只有一个节点的链表没有环
    }

    LinkNode* slow = head;
    LinkNode* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        //快慢指针相遇则有环
        if (slow == fast)
        {
            return 1;
        }
    }

    return 0; 
}