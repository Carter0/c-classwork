#include "GameLogic.h"
#include "Util.h"
#include <iostream>
using namespace std;

GameLogic::GameLogic()
{
    // TODO ?
}
GameLogic::~GameLogic() {
    // TODO ?
}

void GameLogic::run()
{
    _finished = false;

    input_board_size();

    while (!_finished) {
        display_board_and_input_next_move();
    }
}

void GameLogic::input_board_size()
{
    int board_Size;
    cout << "Input board size (2-5): ";
    cin >> board_Size;
    if (board_Size < 2 || board_Size > 5) {
        cout << "Invalid size." << endl;
        throw "Size needs to be between 2 and 5";
    }
    _board.reset_board_size(board_Size);
}

void GameLogic::display_board_and_input_next_move()
{
    _board.print_board();
    cout << endl;



    //reset board player option
    string reset;
    cout << "Reset Board? (y/n)" << endl;
    cin >> reset; 
    if(reset == "y") {
        input_board_size();
    }



    unsigned int x = 0;
    unsigned int y = 0;
    if(_board.get_status() == GameStatus::PLAYING_X_TURN) {
        cout << "Enter move for X: ";
        cout <<"Enter x position on board" << endl;
        cin >> x;
        cout << "Enter y position on board" << endl;
        cin >> y;
        bool move = _board.make_move(x, y);
        if(move == false) {
            cout << "Invalid Move" << endl;       
        } 
    } else if(_board.get_status() == GameStatus::PLAYING_O_TURN) {
        cout << "Enter move for O: ";
        cout <<"Enter x position on board" << endl;
        cin >> x;
        cout << "Enter y position on board" << endl;
        cin >> y;
        bool move = _board.make_move(x, y);
        if(move == false) {
            cout << "Invalid Move" << endl;
        }
    } else if (_board.get_status() == GameStatus::OVER_TIE) {
        cout << "Tie game!" << endl;
        _finished = true;
    } else  if(_board.get_status() == GameStatus::OVER_X_WON) {
        cout << "X wins!" << endl;
        _finished = true;
    } else if(_board.get_status() == GameStatus::OVER_O_WON) {
        cout << "O wins!" << endl;
        _finished = true;
    } else if(_board.make_move(x, y) == false){
        cout << "Illegal move." << endl;
        _finished = true;
    }
    //    cout << "Goodbye." << std::endl;

}
