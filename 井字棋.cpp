#include <iostream>
#include <vector>
using namespace std;

class Board
{
public:
	bool checkWon(vector<vector<int> > board)
	{
		for (int i = 0; i < board.size(); i++)
		{
			if (board[i][0] == board[i][1] == 1 && board[i][1] == board[i][2] == 1)
			{
				return true;
			}
		}
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[0][j] == board[1][j] == 1 && board[1][j] == board[2][j] == 1)
			{
				return true;
			}
		}
		if (board[0][0] == board[1][1] == 1 && board[1][1] == board[2][2] == 1)
		{
			return true;
		}
		if (board[2][0] == board[1][1] == 1 && board[1][1] == board[0][2] == 1)
		{
			return true;
		}
		return false;
	}
};

int main1()
{
	Board b;
	vector<vector<int>> vv = { { 1, 0, 1 }, { 1, -1, -1 }, { 1, -1, 0 } };
	cout << b.checkWon(vv);
	return 0;
}