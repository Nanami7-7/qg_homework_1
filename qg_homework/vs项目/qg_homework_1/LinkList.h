#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	//���嵥����
	typedef struct LinkNode
	{
		int data;
		struct LinkNode* next;
	}LinkNode;
	//����˫������
	typedef struct DLinkNode
	{
		int data;
		struct DLinkNode* next;
		struct DLinkNode* prior;

	}DLinkNode;
	//��ʼ��������
	struct LinkNode* Init_LinkList();
	//��ʼ��˫������
	struct DLinkNode* Init_DLinkList();
	//�����ӡ������
	void Foreach_LinkList(struct LinkNode* head);
	//�����ӡ˫������
	void Foreach_DLinkList(struct DLinkNode* head);
	//�����ӡ˫������
	void Rev_Foreach_DLinkList(struct DLinkNode* head);
	//�������е�
	struct LinkNode* MiddleNode(LinkNode* head);
	//�ж������Ƿ�ɻ�
	int hasCycle(LinkNode* head);
	//��ת�����ǵݹ飩
	struct LinkNode* Rev_LinkList(LinkNode* head);
	//��ת�����ݹ飩
	struct LinkNode* Rev1_LinkList(LinkNode* head);
	//��������ż����
	struct LinkNode* SwapPairs_LinkList(LinkNode* head);
	
#ifdef __cplusplus
}
#endif
