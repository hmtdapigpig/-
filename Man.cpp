#include "Man.h"
#include <graphics.h> 

void Man::init(Chess* chess)
{
	this->chess = chess;
}

void Man::go()
{
	MOUSEMSG msg;
	ChessPos pos;
	while (1) {
		msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(msg.x, msg.y, &pos)) {
			break;
		}
	}

	printf("ºÚ×Ó (%d,%d)\n", pos.row, pos.col);

	// Âä×Ó
	chess->chessDown(&pos, CHESS_BLACK);
}
