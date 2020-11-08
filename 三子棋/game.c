#include "game.h"

void Menu()
{
	printf("###################\n");
	printf("## 1.play 2.exit ##\n");
	printf("###################\n");
	printf("Please Select:");
}

void ShowBoard(char board[][COL], int row,int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("[%c]",board[i][j]);
		}
		printf("\n");
	}
}

void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1) {
		printf("���������λ��# ");
		scanf("%d %d", &x, &y);
		if (x < 1 || x > 3 || y < 1 || y > 3) {
			printf("���������������!\n");
			continue;
		}
		else if (board[x - 1][y - 1] != ' ') {
			printf("��λ���Ѿ���ռ�ã�\n");
			continue;
		}
		else {
			board[x - 1][y - 1] = P_COLOR;
			break;
		}
	}
}

char Judge(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && \
			board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (int j = 0; j < col; j++) {
		if (board[0][j] == board[1][j] && \
			board[1][j] == board[2][j] && board[0][j] != ' ') {
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && \
		board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && \
		board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return NEXT;
			}
		}
	}
	return DRAW;
}

void ComputerMove(char board[][COL], int row, int col)
{
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = C_COLOR;
			break;
		}
	}
}
void Game()
{
	srand((unsigned long)time(NULL));
	char board[ROW][COL];
	memset(board, ' ', sizeof(board));
	char result = 'x';
	do {
		ShowBoard(board,ROW,COL);
		PlayerMove(board,ROW,COL);
		result=Judge(board, ROW, COL);
		if (result != NEXT) {
			break;
		}
		ComputerMove(board, ROW, COL);
		result=Judge(board, ROW, COL);
		if (result != NEXT) {
			break;
		}
	} while (1);
	if (P_COLOR == result) {
		printf("��Ӯ��\n");
	}
	else if(C_COLOR==result){
		printf("����Ӯ��\n");
	}
	else {
		printf("ƽ��\n");
	}
	
}