#include <graphics.h> 
#include <vector>
using namespace std;
#pragma once

	typedef enum {
		CHESS_WHITE = 1,  // 白方
		CHESS_BLACK = 2    // 黑方
	} chess_kind_t;

	struct ChessPos {
		int row;
		int col;
	};

	class Chess
	{
	public:

		Chess(int gradeSize, int marginX, int marginY, float chessSize);

		void init();

		bool clickBoard(int x, int y, ChessPos* pos);

		void chessDown(ChessPos* pos, chess_kind_t kind);

		int getGradeSize();

		// 获取指定位置是黑棋，还是白棋，还是空白
		int getChessData(ChessPos* pos);
		int getChessData(int row, int col);

		bool checkOver();


	private:
		// 棋盘尺寸
		int gradeSize;
		float margin_x;
		int margin_y;
		float chessSize; 

		IMAGE chessBlackImg;
		IMAGE chessWhiteImg;

		// 存储当前游戏棋盘和棋子的情况,空白为0，黑子2，白子1
		vector<vector<int>> chessMap;

		bool playerFlag;

		void updateGameMap(ChessPos* pos);

		bool checkWin();

		ChessPos lastPos; //最近落子位置
	};

