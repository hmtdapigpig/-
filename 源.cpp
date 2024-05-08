#include <iostream>
#include "ChessGame.h"

int main(void) {
	Chess chess(13, 44, 43, 67.4);
	Man man;
	Man2 man2;
	AI ai;
	ChessGame game(&man, &man2, &chess);

	game.play();

	return 0;
}

