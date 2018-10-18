#include "Board.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


Board::Board()
{
}

Board::~Board()
{
}




void Board::reset_board_size(int _size)
{
    size = _size; 
    for (int i = 0; i < size; i++) {
        board.push_back(vector<Space>());
        for (int j = 0; j < size; j++) {
            Space temp = Space::BLANK;
            board[i].push_back(temp);
            if(board.at(i).at(j) != Space::BLANK) {
                board.at(i).at(j) = temp;
            }
        }
    }
    gameStatus = GameStatus::PLAYING_X_TURN;
}

bool Board::make_move(int row, int column)
{
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (i == row && j == column) {
                if(board.at(i).at(j) == Space::BLANK) {
                    if(get_status() == GameStatus::PLAYING_X_TURN) { 
                        board.at(row).at(column) = Space::X; 
                    } else if (get_status() == GameStatus::PLAYING_O_TURN) {
                        board.at(row).at(column) = Space::O;                 
                    }

                    if(gameStatus == GameStatus::PLAYING_X_TURN){
                        gameStatus = GameStatus::PLAYING_O_TURN;
                    } else if(gameStatus == GameStatus::PLAYING_O_TURN) {
                        gameStatus = GameStatus::PLAYING_X_TURN;
                    }
                    //determining game over 
                    //if(checkNeighbors(true, 0, 0, 0, 0) == true) {
                        //gameStatus = GameStatus::OVER_X_WON;
                    //}
                    //if(checkNeighbors(false, 0, 0, 0, 0) == true) {
                        //gameStatus = GameStatus::OVER_O_WON;
                    //}


                    return true;
                } else {
                    cout << "Space already filled" << endl;
                }
            }
        }
    }
    return false;
}


//determines whether the game is over and what turn it is
GameStatus Board::get_status() const
{
    //determining whose turn it is
    bool xTurn = false;
    //bool oTurn = false;
    if(gameStatus == GameStatus::PLAYING_X_TURN) {
        xTurn = true;
    } else if(gameStatus == GameStatus::PLAYING_O_TURN) {
        //oTurn = true;
    } else if (gameStatus == GameStatus::OVER_X_WON) {
        return GameStatus::OVER_X_WON;
    } else if (gameStatus == GameStatus::OVER_O_WON) {
        return GameStatus::OVER_O_WON;
    }

    //determining game over 
        //if(checkNeighbors(true, 0, 0, 0, 0) == true) {
            //return GameStatus::OVER_X_WON;
        //}
    //if(checkNeighbors(false, 0, 0, 0, 0) == true) {
        //return GameStatus::OVER_O_WON;
    //}

    //do tie condition after some error checking
    if(isBoardFull() == true) {
        return GameStatus::OVER_TIE;
    }

    //if none of the above is true, return the opposite players turn
    if(xTurn == true) {
        return GameStatus::PLAYING_X_TURN;
    } else {
        return GameStatus::PLAYING_O_TURN;
    }
}

//if playerturn == true is x, false is 0
//bool Board::checkNeighbors(bool playerTurn, int outOfBounds, int winCounter, int i, int j) const {
    ////check the current tile for information
    //if(playerTurn == true) {
        //if(board.at(i).at(j) == Space::X) {
            //winCounter++;
        //}
    //}  
    //if(playerTurn == false) {
        //if(board.at(i).at(j) == Space::O) {
            //winCounter++;
        //}
    //}
    //outOfBounds++;
    ////determines whether whole board has been checked
    //if(outOfBounds == size - 1) {
        //cout << "this isnt right" << endl;
        //cout << size - 1 << "here is size - 1" << endl;
        //if(winCounter == size - 1) {
            ////if someone won return true
            //return true; 
        //} else {
            ////if no one won return false
            //return false;
        //}
    //} else {
        ////do the recursion to check the other tiles if the other tiles have not been checked
        //return checkNeighbors(playerTurn, outOfBounds, winCounter, i + 1, j);
        //return checkNeighbors(playerTurn, outOfBounds, winCounter, i, j + 1);
        //return checkNeighbors(playerTurn, outOfBounds, winCounter, i + 1, j + 1);
    //}
//}

bool Board::isBoardFull() const {
    bool isFull = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(board.at(i).at(j) == Space::BLANK) {
                isFull = false; 
            } 
        }
    }
    return isFull;
}




void Board::print_board() const {
    bool rightSide = false;
    bool leftSide = false;
    string currentSquare;
    for(int i = 0; i < size; i++) {
        cout << endl;
        if(i == 0) {
            //now on the top of the grid
            leftSide = true;
        } else {
            leftSide = false;
        }
        if (i == size - 1) {
            //now on the bottom of the grid
            rightSide = true;
        } else {

            rightSide = false;
        }


        for(int j = 0; j < size; j++) {
            if(board.at(i).at(j) == Space::BLANK) {
                currentSquare = " ";
            } else if (board.at(i).at(j) == Space::X) {
                currentSquare = "X";
            } else {
                currentSquare = "O";
            }

            if(leftSide == true) {
                if(j == 0) {
                    //top left corner
                    cout << currentSquare << "|"; 
                } else if(j == size - 1) {
                    //top right corner
                    cout << currentSquare;
                } else {
                    //top middle
                    cout << currentSquare << "|";
                }
            } else if(rightSide == true) {
                if(j == 0) {
                    //bottom right corner
                    cout << currentSquare << "|";
                } else if(j == size - 1) {
                    //bottom right corner 
                    cout << currentSquare;
                } else {
                    //bottom middle area
                    cout << currentSquare << "|";
                }
            } else {
                //everything in the middle now 
                if(j == size - 1) {
                    cout << currentSquare;
                } else {
                    cout << currentSquare << "|";
                }
            }
        }
        if (i != size - 1) {
            cout << endl;
            for (int k = 0; k < size; k++) {
                cout << "__";
            }


        }

    } 
}
