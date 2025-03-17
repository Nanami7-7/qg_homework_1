#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	//定义单链表
	typedef struct LinkNode
	{
		int data;
		struct LinkNode* next;
	}LinkNode;
	//定义双向链表
	typedef struct DLinkNode
	{
		int data;
		struct DLinkNode* next;
		struct DLinkNode* prior;

	}DLinkNode;
	//初始化单链表
	struct LinkNode* Init_LinkList();
	//初始化双向链表
	struct DLinkNode* Init_DLinkList();
	//正向打印单链表
	void Foreach_LinkList(struct LinkNode* head);
	//正向打印双向链表
	void Foreach_DLinkList(struct DLinkNode* head);
	//逆向打印双向链表
	void Rev_Foreach_DLinkList(struct DLinkNode* head);
	//单链表中点
	struct LinkNode* MiddleNode(LinkNode* head);
	//判断链表是否成环
	int hasCycle(LinkNode* head);
	//反转链表（非递归）
	struct LinkNode* Rev_LinkList(LinkNode* head);
	//反转链表（递归）
	struct LinkNode* Rev1_LinkList(LinkNode* head);
	//单链表奇偶调换
	struct LinkNode* SwapPairs_LinkList(LinkNode* head);
	
#ifdef __cplusplus
}
#endif
