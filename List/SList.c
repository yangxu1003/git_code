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

//开辟结点
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//尾插  
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	//判空
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//遍历找到尾
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}

//尾删
void SListPopBack(SListNode** pphead)
{
	//1、空结点
	//2、1个结点
	//3、一个结点以上
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

//头插
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

//头删
void SListPopFront(SListNode** pphead)
{
	//1、空结点
	//2.一个结点 3.一个以上
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

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
//分析：后面方便插入
void SListInsertAfter(SListNode* pos, SListDataType x)
{
	//1、空结点
	//2、第1个结点  4、最后一个结点
	//3、中间任意位置
	assert(pos);
	SListNode* newNode = BuySListNode(x);
	SListNode* nextNode = pos->next;
	newNode->next = nextNode;
	pos->next = newNode;
}

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
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