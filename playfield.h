/*
 * Code Training
 * Chess game with cpp
 *
 */

#ifndef PLAYFIELD_H
#define PLAYFIELD_H

const int playFieldSize = 8;

class playfield
{
public:
    playfield();
    char board[playFieldSize][playFieldSize]; //Field is 8x8

};

#endif // PLAYFIELD_H
