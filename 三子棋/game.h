//#pragma once防止头文件被重复包含
#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <time.h>
#pragma warning (disable:4996)

#define ROW 3
#define COL 3
#define P_COLOR 'X'
#define C_COLOR 'O'
#define NEXT 'N'
#define DRAW 'D'

void Game();
void Menu();

#endif