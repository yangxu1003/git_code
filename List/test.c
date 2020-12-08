#include "SList.h"


int main()
{
	/*SListNode* phead = NULL;*/
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPrint(pList);

	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPrint(pList);

	SListPushFront(&pList, 5);
	SListPushFront(&pList, 6);
	SListPushFront(&pList, 7);
	SListPushFront(&pList, 8);
	SListPrint(pList);

	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPrint(pList);

	SListInsertAfter(pList, 4);
	SListInsertAfter(pList, 2);
	SListInsertAfter(pList->next, 3);
	SListPrint(pList);

	SListEraseAfter(pList);
	SListEraseAfter(pList->next);
	SListPrint(pList);
	return 0;
}