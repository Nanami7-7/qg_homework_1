#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
struct LinkNode* Init_LinkList()
{   //����ͷ���
	struct LinkNode* head = malloc(sizeof(struct LinkNode));
	head->data = -1;
	head->next = NULL;
	int val;
	//����βָ��
	struct LinkNode* pRear = head;
	while (1)
	{
		printf("����������\n");
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		//�����½ڵ�
		struct LinkNode* NewNode = malloc(sizeof(struct LinkNode));
		NewNode->data = val;
		NewNode->next = NULL;
		//�����½ڵ�
		pRear->next = NewNode;
		//����βָ��
		pRear = NewNode;
	}
	return head;
}
