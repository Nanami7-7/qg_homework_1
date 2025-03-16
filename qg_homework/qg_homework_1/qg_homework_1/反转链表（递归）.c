#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
LinkNode* Rev1_LinkList(LinkNode *head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	LinkNode* last = Rev1_LinkList(head->next);
	head->next->next = head;
	head->next = NULL;
	return last;
}