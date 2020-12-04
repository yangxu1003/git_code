#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;//����
}SL,SeqList;

//��ʼ��
void SeqListInit(SL* ps);
//����
void SeqListDestory(SeqList* ps);

//��ӡ
void SeqlistPrint(SL* ps);

//�������
void SeqListCheckCapacity(SL* ps);

//β��βɾ,ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//����λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);
//����
int SeqListFind(SeqList* ps, SLDataType x);