#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#define NAME "yx"
#define PASSWD "123456"
int login(int times)
{
	int ret = -1;
	char name[64];
	char passwd[64];
	int count = 1;
	do {
		printf("�����˺ţ�");
		scanf("%s", name);
		printf("��������: ");
		scanf("%s", passwd);
		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0) {
			ret = 1;
			break;
		}
		else{
			times--;
			printf("�㻹��%d�λ���", times);
			if (times == 0) {
				count *= 3;
				printf("����Ҫ%dS��������\n",count);
				Sleep(count*1000);
				times = 3;
			}
		}
	} while (1);
	return ret;
}
int main()
{
	int times = 3;
	int result = login(times);
	if (1 == result) {
		printf("��½�ɹ�\n");
	}
	else {
		printf("��½ʧ��\n");
	}
	return 0;
}