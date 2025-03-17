#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int main()
{
	struct LinkNode* head = NULL;
	struct DLinkNode* header = NULL;
	struct DLinkNode* mid = NULL;
	int a;
	while (1)
	{
		printf("1.初始化单链表  2.初始化双向链表 3.打印单链表 4.正向打印双向链表 5.逆向打印双向链表 \n");
		printf("6.单链表中点 7.反转单链表(非递归) 8.反转单链表(递归） 9.判断链表是否成环 10.单链表奇偶调换（未开放）\n");
		printf("请输入数字\n");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{

		case 1:

			head = Init_LinkList();
			printf("已初始化单链表\n");
			break;
		case 2:
			header = Init_DLinkList();
			printf("已初始化双向链表\n");
			break;
		case 3:
			if (head == NULL)
			{
				printf("未初始化单链表\n");
				break;
			}
			printf("该单链表为：\n");
			Foreach_LinkList(head);
			printf("\n");
			break;
		case 4:
			if (header == NULL)
			{
				printf("未初始化双向链表\n");
				break;
			}
			printf("该双向链表为：\n");
			Foreach_DLinkList(header);
			printf("\n");
			break;
		case 5:
			if (header == NULL)
			{
				printf("未初始化双向链表\n");
				break;
			}
			printf("该双向链表的逆向输出为：\n");
			Rev_Foreach_DLinkList(header);
			printf("\n");
			break;
		case 6:
			if (head == NULL)
			{
				printf("未初始化单链表\n");
				break;
			}
			mid = MiddleNode(head);
			printf("该链表的中点为%d\n", mid->data);
			break;
		case 7:
			if (head == NULL)
			{
				printf("未初始化单链表\n");
				break;
			}
			head = Rev_LinkList(head);
			printf("已反转该链表\n");
			break;

		case 8:
			if (head == NULL)
			{
				printf("未初始化单链表\n");
				break;
			}
			head = Rev1_LinkList(head);
			printf("已反转该链表\n");
			break;
		case 9:
			if (head == NULL)
			{
				printf("未初始化单链表\n");
				break;
			}
			a = hasCycle(head);
			if (a == 1)
			{
				printf("有环\n");
			}
			printf("无环\n");
			break;
		default:
			printf("无效输入，请重新选择");
		}
	}
	return 0;
}