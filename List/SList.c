#include "SList.h"

void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur -> data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//���ٽ��
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("������ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//β��  
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	//�п�
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//�����ҵ�β
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}

//βɾ
void SListPopBack(SListNode** pphead)
{
	//1���ս��
	//2��1�����
	//3��һ���������
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* prev = *pphead;
		SListNode* tail = prev->next;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

//ͷ��
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

//ͷɾ
void SListPopFront(SListNode** pphead)
{
	//1���ս��
	//2.һ����� 3.һ������
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* front = *pphead;
		*pphead = front->next;
		free(front);
		front = NULL;
	}
}

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
//���������淽�����
void SListInsertAfter(SListNode* pos, SListDataType x)
{
	//1���ս��
	//2����1�����  4�����һ�����
	//3���м�����λ��
	assert(pos);
	SListNode* newNode = BuySListNode(x);
	SListNode* nextNode = pos->next;
	newNode->next = nextNode;
	pos->next = newNode;
}

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos)
{
	assert(pos);

	SListNode* nextNode = pos->next;

	if (nextNode != NULL)
	{
		SListNode* nextnext = nextNode->next;
		free(nextNode);
		pos->next = nextnext;
	}
}