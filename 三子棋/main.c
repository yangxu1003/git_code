#include "game.h"
int main()
{
	int quit = 0;
	int select = 0;
	while (!quit) {
		Menu();
		scanf("%d", &select);
		switch (select) {
		case 1:
			Game();
			printf("����һ��?\n");
		case2:
			quit = 1;
			break;
		default:
			printf("��������!\n");
			break;
		}
	}
	printf("ByeBye\n");

	return 0;
}