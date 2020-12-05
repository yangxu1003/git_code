#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)
char a[20], optr[20], s, op;
int i, j, k, opnd[10], x1, x2, x3;
int temp1, temp2, nxq = 100;
int operand(int s)
{
	if ((s >= 48) && (s <= 57))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int f(char s)
{
	switch (s)
	{
	case '+':return 4;
	case '-':return 4;
	case '*':return 6;
	case '/':return 4;
	case '(':return 2;
	case ')':return 6;
	case '#':return 0;
	default:printf("error1\n");
		return -1;
	}
}

int g(char s)
{
	switch (s)
	{
	case '+':return 3;
	case '-':return 3;
	case '*':return 5;
	case '/':return 5;
	case '(':return 7;
	case ')':return 2;
	case '#':return 0;
	default:printf("error2\n");
		return -1;
	}
}

void get()
{
	s = a[i];
	i = i + 1;
}

int pan(int x, int y)
{
	int i;
	if (x != -1 && y != -1)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return i;
}

int main()
{
	int e = 1;
	printf("please input your exoression:\n");

	i = 0;
	do {
		i = i + 1;
		scanf("%c", &a[i]);

	} while (a[i] != '#');
	i = 1;
	j = k = 1;
	optr[j] = '#';
	get();
	printf("the four is:\n");
	while (!((optr[j] == '#') && (s == '#')))
	{

		if (operand(s))
		{
			opnd[k] = s - 48;
			k = k + 1;
			get();
		}
		else
		{
			temp1 = f(optr[j]);
			temp2 = g(s);
			if (temp1 > temp2 && pan(temp1, temp2))
			{
				op = optr[j];
				j = j - 1;

				x1 = opnd[k - 1];
				k = k - 1;
				x2 = opnd[k - 1];
				k = k - 1;
				switch (op)
				{
				case '+':x3 = x2 + x1; break;
				case '-':x3 = x2 - x1; break;
				case '*':x3 = x2 * x1; break;
				case '/':x3 = x2 / x1; break;
				}
				printf("(%d) (%c,%d,%d,%d)\n", nxq++, op, x2, x1, x3);
				opnd[k] = x3;
				k++;
			}
			else if (temp1 < temp2 && pan(temp1, temp2))
			{
				j = j + 1;
				optr[j] = s;
				get();
			}
			else if (temp1 == temp2 && pan(temp1, temp2))
			{
				if (optr[j] == '(' || optr[j] == ')')
				{
					j = j - 1;
					get();
				}
			}
			else
			{
				printf("error!!!!\n");
				return 1;
			}
		}
	}
	printf("the result is %d\n", (opnd[1]));
	return 1;
}
