/*
 * Code Training
 * Chess game with cpp
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setFigureType(const enumFigures& type)
{
    /*
    delete figures_;
    if(type == king)
        figures_ = new cking();
    else if(type == queen)
        figures_ = new cqueen();
    else if(type == rook)
        figures_ = new crook();
    else if(type == bishop)
        figures_ = new cbishop();
    else if(type == knight)
        figures_ = new cknight();
    else if(type == pawn)
        figures_ = new cpawn();
        */
}

void MainWindow::push_back_amount(const enum_player& player, const Figures& figure, const int& amount)
{
    //player one
    if(player == player_one)
    {
        for(int i = 0; i<amount; ++i)
            list_player_one.push_back(figure);
    }
    //player two
    else if(player_two)
    {
        for(int i = 0; i<amount; ++i)
            list_player_two.push_back(figure);
    }

}

void MainWindow::initFigures()
{
    // Figures initalisierung

    //Player 1
    //King 1
    Figures fKing(king, white, false);
    push_back_amount(player_one, fKing, 1);
    /*
    //Queen 1
    figures cQueen();
    push_back_amount(player_one, cQueen(), 1);

    //Rook 2
    figures cRook();
    push_back_amount(player_one, cRook(), 2);

    //Bishop 2
    figures cBishop();
    push_back_amount(player_one, cBishop(), 2);

    //Knight 2
    figures cKnight();
    push_back_amount(player_one, cKnight(), 2);

    //Pawn 8
    figures cPawn();
    push_back_amount(player_one, cPawn(), 8);

    //--------------------------------------
    //Player 2
    //King 1
    figures cKing();
    push_back_amount(player_two, cKing(), 1);

    //Queen 1
    figures cQueen();
    push_back_amount(player_two, cQueen(), 1);

    //Rook 2
    figures cRook();
    push_back_amount(player_two, cRook(), 2);

    //Bishop 2
    figures cBishop();
    push_back_amount(player_two, cBishop(), 2);

    //Knight 2
    figures cKnight();
    push_back_amount(player_two, cKnight(), 2);

    //Pawn 8
    figures cPawn();
    push_back_amount(player_two, cPawn(), 8);
    */
}
