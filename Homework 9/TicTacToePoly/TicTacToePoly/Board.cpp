#include "Board.h"

Board::Board()
{
}

void Board::reset()
{
}

bool Board::isFull() const
{
	return false;
}

bool Board::isWinner(char playerPiece) const
{
	return false;
}

bool Board::isValidMove(int move) const
{
	return false;
}

std::string Board::getBoardPlaces() const
{
	return std::string();
}

std::string Board::getCurrentBoard() const
{
	return std::string();
}

void Board::makeMove(char playerPiece, int move)
{
}

bool Board::checkCombo(int combo, char piece) const
{
	return false;
}
