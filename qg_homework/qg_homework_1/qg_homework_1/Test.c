#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int main()
{

	printf("������һ��˫������\n");
	DLinkNode* head = Init_DLinkList();
	printf("��˫������Ϊ");
	Foreach_DLinkList(head);
	printf("\n");
	printf("��ת���˫������Ϊ");
	Rev_Foreach_DLinkList(head);
	printf("\n");
	printf("---------------\n");
	printf("������һ��������");
	LinkNode* header = Init_LinkList();
	printf("�õ�����Ϊ");
	Foreach_LinkList(header);
}