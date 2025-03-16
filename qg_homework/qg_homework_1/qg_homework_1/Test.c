#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int main()
{

	printf("请输入一个双向链表\n");
	DLinkNode* head = Init_DLinkList();
	printf("该双向链表为");
	Foreach_DLinkList(head);
	printf("\n");
	printf("反转后的双向链表为");
	Rev_Foreach_DLinkList(head);
	printf("\n");
	printf("---------------\n");
	printf("请输入一个单链表");
	LinkNode* header = Init_LinkList();
	printf("该单链表为");
	Foreach_LinkList(header);
}