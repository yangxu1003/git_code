#include "SeqList.h"
//����
void SeqListCheckCapacity(SL* ps)
{
	//��������
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
			free(ps);
			exit(-1);
		}
	}
}

//��ʼ��
void SeqListInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);//ֱ�ӽ�������
	}
	ps->size = 0;
	ps->capacity = 4;
}
//����
void SeqListDestory(SL* ps)
{
	assert(ps);
	free(ps->a);
	ps->a == NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//��ӡ
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListInsert(ps, ps->size, x);
}

//βɾ
void SeqListPopBack(SL* ps)
{
	SeqListErase(ps, ps->size - 1);
}

//ͷ��
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListInsert(ps, 0, x);
}

//ͷɾ
void SeqListPopFront(SL* ps)
{
	SeqListErase(ps, 0);
}

//����λ�õĲ���
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
//����λ�õ�ɾ��
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
//����
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