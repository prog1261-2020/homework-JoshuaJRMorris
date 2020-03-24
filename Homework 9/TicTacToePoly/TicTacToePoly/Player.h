#pragma once
class Player
{
public:
	Player(char p) :piece(p) {};
	virtual ~Player() {};

	virtual int getMove() = 0;
	char getPiece();
private:
	char piece;
};

