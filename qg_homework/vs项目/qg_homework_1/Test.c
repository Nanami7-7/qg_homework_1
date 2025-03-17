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
		printf("1.��ʼ��������  2.��ʼ��˫������ 3.��ӡ������ 4.�����ӡ˫������ 5.�����ӡ˫������ \n");
		printf("6.�������е� 7.��ת������(�ǵݹ�) 8.��ת������(�ݹ飩 9.�ж������Ƿ�ɻ� 10.��������ż������δ���ţ�\n");
		printf("����������\n");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{

		case 1:

			head = Init_LinkList();
			printf("�ѳ�ʼ��������\n");
			break;
		case 2:
			header = Init_DLinkList();
			printf("�ѳ�ʼ��˫������\n");
			break;
		case 3:
			if (head == NULL)
			{
				printf("δ��ʼ��������\n");
				break;
			}
			printf("�õ�����Ϊ��\n");
			Foreach_LinkList(head);
			printf("\n");
			break;
		case 4:
			if (header == NULL)
			{
				printf("δ��ʼ��˫������\n");
				break;
			}
			printf("��˫������Ϊ��\n");
			Foreach_DLinkList(header);
			printf("\n");
			break;
		case 5:
			if (header == NULL)
			{
				printf("δ��ʼ��˫������\n");
				break;
			}
			printf("��˫��������������Ϊ��\n");
			Rev_Foreach_DLinkList(header);
			printf("\n");
			break;
		case 6:
			if (head == NULL)
			{
				printf("δ��ʼ��������\n");
				break;
			}
			mid = MiddleNode(head);
			printf("��������е�Ϊ%d\n", mid->data);
			break;
		case 7:
			if (head == NULL)
			{
				printf("δ��ʼ��������\n");
				break;
			}
			head = Rev_LinkList(head);
			printf("�ѷ�ת������\n");
			break;

		case 8:
			if (head == NULL)
			{
				printf("δ��ʼ��������\n");
				break;
			}
			head = Rev1_LinkList(head);
			printf("�ѷ�ת������\n");
			break;
		case 9:
			if (head == NULL)
			{
				printf("δ��ʼ��������\n");
				break;
			}
			a = hasCycle(head);
			if (a == 1)
			{
				printf("�л�\n");
			}
			printf("�޻�\n");
			break;
		default:
			printf("��Ч���룬������ѡ��");
		}
	}
	return 0;
}