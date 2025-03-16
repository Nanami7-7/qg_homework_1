#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
struct LinkNode* Init_LinkList()
{   //创建头结点
	struct LinkNode* head = malloc(sizeof(struct LinkNode));
	head->data = -1;
	head->next = NULL;
	int val;
	//创建尾指针
	struct LinkNode* pRear = head;
	while (1)
	{
		printf("请输入数据\n");
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		//创建新节点
		struct LinkNode* NewNode = malloc(sizeof(struct LinkNode));
		NewNode->data = val;
		NewNode->next = NULL;
		//插入新节点
		pRear->next = NewNode;
		//更新尾指针
		pRear = NewNode;
	}
	return head;
}
