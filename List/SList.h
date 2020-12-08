#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//结点
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

SListNode* BuySListNode(SListDataType x);

//尾插尾删
void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);

//头插头删
void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode** pphead);

void SListPrint(SListNode* phead);

SListNode* SListFind(SListNode* plist, SListDataType x);

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
//分析：后面方便插入
void SListInsertAfter(SListNode* pos, SListDataType x);

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);

// 单链表的销毁
void SListDestory(SListNode* plist);
