#include "game.h"

void Menu()
{
	printf("########################\n");
	printf("#### 1.play  2.exit ####\n");
	printf("########################\n");
	printf("please select:");
}

void ShowLine(int nums)
{
	printf("---");
	for (int i = 0; i < nums; i++) {
		printf("-");
	}
	printf("\n");
}

void ShowBoard(char show_board[][COL], int row, int col)
{
	printf("   ");
	for (int i = 1; i < row - 1; i++) {
		printf(" %d  ", i);
	}
	printf("\n");
	ShowLine(2 * col + col + 4);

	for (int i = 1; i < row - 1; i++) {
		printf("%2d|", i);
		for (int j = 1; j < col - 1; j++) {
			printf(" %c |", show_board[i][j]);
		}
		printf("\n");
		ShowLine(2 * col + col + 4);
	}
}

void SetMine(char mine[][COL], int row, int col)
{
	int count = NUMS;
	while (count) {
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if (mine[x][y] == '0') {
			mine[x][y] = '1';
			count--;
		}
	}
}

int Getmine(char mine[][COL], int row, int col, int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + \
		mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - \
		8 * '0';
}
void Game()
{
	srand((unsigned long)time(NULL));
	char show_board[ROW][COL];
	char mine_board[ROW][COL];
	memset(show_board, '*', sizeof(show_board));
	memset(mine_board, '0', sizeof(mine_board));

	SetMine(mine_board, ROW, COL);
	int x = 0;
	int y = 0;
	int count = (ROW - 2) * (COL - 2) - NUMS;

	do {
		ShowBoard(show_board, ROW, COL);
		printf("输入坐标！\n");
		scanf("%d%d", &x, &y);
		if (x < 1 || x>10 || y < 1 || y > 10) {
			printf("输入越界，重新输入！\n");
			continue;
		}
		if (show_board[x][y] != '*') {
			printf("该坐标已被排除，重新输入！\n");
			continue;
		}
		if (mine_board[x][y] == '1') {
			break;
		}
		int num = Getmine(mine_board, ROW, COL, x, y);
		show_board[x][y] = num + '0';
		count--;
		system("cls");
	} while (count > 0);
	if (count > 0) {
		printf("你输了！\n");
	}
	else {
		printf("你赢了！\n");
	}
	printf("下面是雷区排布！\n");
	ShowBoard(mine_board, ROW, COL);
}