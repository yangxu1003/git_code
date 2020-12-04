#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;//容量
}SL,SeqList;

//初始化
void SeqListInit(SL* ps);
//销毁
void SeqListDestory(SeqList* ps);

//打印
void SeqlistPrint(SL* ps);

//检查容量
void SeqListCheckCapacity(SL* ps);

//尾插尾删,头插头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//任意位置的插入删除
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);
//查找
int SeqListFind(SeqList* ps, SLDataType x);