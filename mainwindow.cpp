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
    initFigures();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::push_back_amount(const enum_player& player, Figures *figure, const int& amount)
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
    Figures *fKing = FiguresFactory::create(king);
    push_back_amount(player_one, fKing, 1);

    //Queen 1
    Figures *fQueen = FiguresFactory::create(queen);
    push_back_amount(player_one, fQueen, 1);

    //Rook 2
    Figures *fCrook = FiguresFactory::create(crook);
    push_back_amount(player_one, fCrook, 1);

    //Bishop 2
    Figures *fBishop = FiguresFactory::create(bishop);
    push_back_amount(player_one, fBishop, 1);

    //Knight 2
    Figures *fKnight = FiguresFactory::create(knight);
    push_back_amount(player_one, fKnight, 1);

    //Pawn 8
    Figures *fPawn = FiguresFactory::create(pawn);
    push_back_amount(player_one, fPawn, 8);


    //--------------------------------------
    //Player 2
    list_player_two = list_player_one; //same set of figures
}
