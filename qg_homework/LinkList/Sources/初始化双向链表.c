#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>

 DLinkNode* Init_DLinkList()
{
	//创建首结点
	 DLinkNode* head = malloc(sizeof( DLinkNode));
	 int val;
	 DLinkNode *pPre=head;
	 DLinkNode *pCur = pPre->next;
	 head->prior = NULL;
	 head->next = NULL;
	 head->data = -1;
	 while (1)
	 {
		 printf("请输入数据，输入-1则结束\n");
		 scanf("%d", &val);
		 if (val == -1)
		 {
			 break;
		 }
		 DLinkNode* NewNode = malloc(sizeof(DLinkNode));
		 pCur = NewNode;
		 pPre->next = pCur;
		 NewNode->data = val;
		 NewNode->prior = pPre;
		 NewNode->next = NULL;
		 pPre = pPre->next;

	 }
	 return head;



}
 void Foreach_DLinkList(struct DLinkNode* head)
 {
	 if (head == NULL)
	 {
		 return;
	 }
	 struct DLinkNode* pCurrent = head->next;
	 while (pCurrent != NULL)
	 {
		 printf("%d ", pCurrent->data);
		 pCurrent = pCurrent->next;
	 }
 }
 void Rev_Foreach_DLinkList(struct DLinkNode* head)
 {
	 DLinkNode* pRear = head->next;
	 DLinkNode* pCur;
	 if (head == NULL)
	 {
		 return;
	 }
	 while (pRear->next != NULL)
	 {
		 pRear = pRear->next;
	 }
	 pCur = pRear;
	 while (pCur->data != -1)
	 {
		 printf("%d ", pCur->data);
		 pCur = pCur->prior;
	 }
 }