#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
LinkNode* MiddleNode(LinkNode* head)
{
	LinkNode* slow=head;
	LinkNode* fast=head;
	while (fast != NULL && fast->next != NULL)//ͷ 1 2 3 4 5
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}