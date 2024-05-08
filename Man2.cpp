#include "Man2.h"
#include <graphics.h> 

void Man2::init(Chess* chess)
{
	this->chess = chess;
}

void Man2::go()
{
	MOUSEMSG msg;
	ChessPos pos;
	while (1) {
		msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(msg.x, msg.y, &pos)) {
			break;
		}
	}

	printf("���� (%d,%d)\n", pos.row, pos.col);

	// ����
	chess->chessDown(&pos, CHESS_WHITE);
}
