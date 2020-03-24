/*
* @file <TicTacToePoly>
*
* @author  <Joshua Morris joshuajrmorris@gmail.com>
* @version <1.0>
*
* change log
* name    J Morris  date March 2020
*
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < tic tac toe game to demonstrate polymorphism, AI >
*
*
* @section LICENSE
*  <any necessary attributions>
*
*  Copyright 2020
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/
//
//
//

#include "Game.h"
#include "Human.h"
#include "AIPlayer.h"
#include <string>
#include <sstream>

#include <iostream>



int main() {
	std::stringstream ss{""};

	std::cout << ss.str();
	std::stringstream().swap(ss);



	
	Game game;
	ss << game.boardView();



}


/*
some useful ideas for game.h

void reset
bool isFull const
bool isValidMove(int move) const
bool isWinner(char playerPiece) const
std::String getBoardPlaces const
std::String getCurrentBoard const
void makeMove(char playerPieve, int move)


private:

bool checkCombo(int combo, char piece) const




*/
//Game game;

////game.addPlayer(Player());

///*game.play();*/
//while (game.isPlaying()) {
//	system("cls");
//	std::cout << boardPositions;
//	std::cout << game.getCurrentBoard();
//	game.nextPlayer();
//	// get valid 1-9
//	//game.isValidMove()
//}
///player must be an abstract class
// human and AI must implement different methods