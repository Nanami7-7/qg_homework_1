#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
struct LinkNode* Rev_LinkList(struct LinkNode* head)
{
    if (head ==NULL || head->next == NULL)
        return;
    //定义两个辅助指针
    struct LinkNode* pPre;
    struct LinkNode* pCur;
    //pPre指向链表第一个元素 pCur指向pPre后一个元素
    pPre = head->next;
    pCur = pPre->next;
    while (pCur != NULL)
    {
        //防止后续结点丢失，让pPre所在结点指向pCur所在结点的后一个结点
        pPre->next = pCur->next;
        //让pCur所在结点连接原先第一个元素所在结点
        pCur->next = head->next;
        //头结点连接pCur所在结点
        head->next = pCur;
        //更新pCur位置
        pCur = pPre->next;
    }
    return head;


}