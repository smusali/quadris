#ifndef __BLOCK_H__
#define __BLOCK_H__
#include <iostream>
#include "cell.h"


class Block {
    char type;
    unsigned long colour;
    Cell cells[4];
    bool isSpace;
public:
    Block(char type, unsigned long color);                 //done
    char getType();                              //done
    bool getIsSpace();
    void setType(char type);
    unsigned long getColour();				//done
    Cell getCell(int num);			//done
     void left();
      void right();
      void down();
    // void rotateCC();
    // void rotateCCW();
    void drawBlock();				//done
    Block &operator=(const Block &other);        //done    // new
};

#endif
