#include "SeqList.h"

//≤‚ ‘Œ≤≤ÂŒ≤…æ£¨Õ∑≤ÂÕ∑…æ
void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s ,1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushFront(&s, 0);
	SeqListPopBack(&s);
	SeqListPopFront(&s);
	SeqListDestory(&s);
	SeqListPrint(&s);
	/*SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPushFront(&s, 0);
	SeqListPopFront(&s);
	SeqListInsert(&s, 1, 5);
	SeqListErase(&s, 1);
	SeqListPrint(&s);
	printf("%d\n",SeqListFind(&s, 3));*/
}


int main()
{
	TestSeqList1();

	return 0;
}