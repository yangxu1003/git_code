#include "SeqList.h"
//扩容
void SeqListCheckCapacity(SL* ps)
{
	//满了增容
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("扩容失败\n");
			free(ps);
			exit(-1);
		}
	}
}

//初始化
void SeqListInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);//直接结束程序
	}
	ps->size = 0;
	ps->capacity = 4;
}
//销毁
void SeqListDestory(SL* ps)
{
	assert(ps);
	free(ps->a);
	ps->a == NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//打印
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListInsert(ps, ps->size, x);
}

//尾删
void SeqListPopBack(SL* ps)
{
	SeqListErase(ps, ps->size - 1);
}

//头插
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListInsert(ps, 0, x);
}

//头删
void SeqListPopFront(SL* ps)
{
	SeqListErase(ps, 0);
}

//任意位置的插入
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	assert(pos >= 0 && pos <= ps->size);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
//任意位置的删除
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos < ps->size && pos >= 0); 
	int start = pos;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start+1];
		++start;
	}
	ps->size--;
}
//查找
int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
	int index = 0;
	while (index < ps->size)
	{
		if (ps->a[index] == x)
		{
			return index;
		}
		index++;
	}
	return -1;
}