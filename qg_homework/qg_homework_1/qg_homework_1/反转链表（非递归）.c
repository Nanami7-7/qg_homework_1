#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
struct LinkNode* Rev_LinkList(struct LinkNode* head)
{
    if (head ==NULL || head->next == NULL)
        return;
    //������������ָ��
    struct LinkNode* pPre;
    struct LinkNode* pCur;
    //pPreָ�������һ��Ԫ�� pCurָ��pPre��һ��Ԫ��
    pPre = head->next;
    pCur = pPre->next;
    while (pCur != NULL)
    {
        //��ֹ������㶪ʧ����pPre���ڽ��ָ��pCur���ڽ��ĺ�һ�����
        pPre->next = pCur->next;
        //��pCur���ڽ������ԭ�ȵ�һ��Ԫ�����ڽ��
        pCur->next = head->next;
        //ͷ�������pCur���ڽ��
        head->next = pCur;
        //����pCurλ��
        pCur = pPre->next;
    }
    return head;


}