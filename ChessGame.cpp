#include "ChessGame.h"



ChessGame::ChessGame(Man* man, Man2* man2, Chess* chess)
{
	this->man = man;
	this->man2 = man2;
	this->chess = chess;

	man2->init(chess);
	man->init(chess);
}

void ChessGame::play()
{
	chess->init();
	while (1) {
		man->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}

		man2->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
	}
}
