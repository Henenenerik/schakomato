#pragma once
#include "Piece.h"
class Bishop :
    public Piece
{
public:
    Bishop(Color player) : Piece{ BishopPiece, player } {};
    Bishop* Copy() { return new Bishop(GetPlayer()); };
    int PossibleMoves(Piece** board, std::vector<Square>* movesVector);
};

