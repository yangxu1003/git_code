#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//���
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

SListNode* BuySListNode(SListDataType x);

//β��βɾ
void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);

//ͷ��ͷɾ
void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode** pphead);

void SListPrint(SListNode* phead);

SListNode* SListFind(SListNode* plist, SListDataType x);

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
//���������淽�����
void SListInsertAfter(SListNode* pos, SListDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);

// �����������
void SListDestory(SListNode* plist);
