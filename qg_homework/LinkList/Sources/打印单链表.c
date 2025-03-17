#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
void Foreach_LinkList(struct LinkNode* head)
{
	if (head == NULL||head->next == NULL)
	{
		return;
	}
	struct LinkNode* pCurrent = head->next;
	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->data);
		pCurrent = pCurrent->next;
	}
}