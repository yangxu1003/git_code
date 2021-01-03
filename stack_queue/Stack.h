#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
 
typedef int STDataType;

typedef struct Stack
{
	STDataType* _a;
	int _top; //栈顶下标
	int _capacity;
}Stack;

void StackInit(Stack* pst);
void StackDestory(Stack* pst);
void StackPush(Stack* pst, STDataType x);//入栈
void StackPop(Stack* pst);//出栈
int StackSize(Stack* pst);//获取数据个数

//返回1是空  返回0是非空
int StackEmpty(Stack* pst);

//获取栈顶的数据
STDataType StackTop(Stack* pst);