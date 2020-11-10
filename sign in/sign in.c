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
		printf("输入账号：");
		scanf("%s", name);
		printf("输入密码: ");
		scanf("%s", passwd);
		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0) {
			ret = 1;
			break;
		}
		else{
			times--;
			printf("你还有%d次机会", times);
			if (times == 0) {
				count *= 3;
				printf("你需要%dS才能重试\n",count);
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
		printf("登陆成功\n");
	}
	else {
		printf("登陆失败\n");
	}
	return 0;
}