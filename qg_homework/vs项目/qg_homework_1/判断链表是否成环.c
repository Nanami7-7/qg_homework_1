#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int hasCycle(LinkNode* head) 
{
    if (head == NULL || head->next == NULL) 
    {
        return 0; // �������ֻ��һ���ڵ������û�л�
    }

    LinkNode* slow = head;
    LinkNode* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        //����ָ���������л�
        if (slow == fast)
        {
            return 1;
        }
    }

    return 0; 
}