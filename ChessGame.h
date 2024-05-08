#pragma once
#include "Man.h"
#include "AI.h"
#include "Chess.h"
#include "Man2.h"
class ChessGame
{
public:
	ChessGame(Man* man, Man2* man2, Chess* chess);
	void play();

private:
	Man* man;
	Man2* man2;
	Chess* chess;
};


