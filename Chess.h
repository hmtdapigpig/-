#include <graphics.h> 
#include <vector>
using namespace std;
#pragma once

	typedef enum {
		CHESS_WHITE = 1,  // �׷�
		CHESS_BLACK = 2    // �ڷ�
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

		// ��ȡָ��λ���Ǻ��壬���ǰ��壬���ǿհ�
		int getChessData(ChessPos* pos);
		int getChessData(int row, int col);

		bool checkOver();


	private:
		// ���̳ߴ�
		int gradeSize;
		float margin_x;
		int margin_y;
		float chessSize; 

		IMAGE chessBlackImg;
		IMAGE chessWhiteImg;

		// �洢��ǰ��Ϸ���̺����ӵ����,�հ�Ϊ0������2������1
		vector<vector<int>> chessMap;

		bool playerFlag;

		void updateGameMap(ChessPos* pos);

		bool checkWin();

		ChessPos lastPos; //�������λ��
	};

