/*
 * Code Training
 * Chess game with cpp
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
#include <QScrollArea>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  initFigures();
  drawPlayfield();
}

MainWindow::~MainWindow()
{
  delete ui;
  clearPlayfield();
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

void MainWindow::drawPlayfield()
{
  bool color = false;
  for(int i = 0;i<playFieldSize;++i)
    {
      color= !color;
      for(int j=0;j<playFieldSize;++j)
        {
          QFrame *w = new QFrame;

          if(color)
            w->setStyleSheet("background-color: #ffce9e");
          else
            w->setStyleSheet("background-color: #d18b47");

          color = !color;

          ui->gridLayout_2->setSpacing(0);
          ui->gridLayout_2->addWidget(w,i,j);
          ui->gridLayout_2->setRowMinimumHeight(i,100);
          ui->gridLayout_2->setColumnMinimumWidth(j,100);
        }
    }
}

void MainWindow::clearPlayfield()
{
  for(int i = 0;i<playFieldSize;++i)
    for(int j=0;j<playFieldSize;++j)
      delete ui->gridLayout_2->widget();

}

void MainWindow::placeFigure(const enumFigures&, const enum_player&, const int&, const int&)
{
  //for(int i=0;i<playFieldSize;++i) //player1
  //  {
      //QFrame *wpawn = new QFrame;
      //wpawn->setStyleSheet("background-color: white");
      //wpawn->setFixedSize(10,10);

  std::list<Figures*>::iterator it = list_player_one.begin();
  std::advance(it,0);
  Figures *f = *it;
  QPixmap p = f->get_FigurePic();
  QLabel l;// = new QLabel("");
  l.setPixmap(p);
  QScrollArea s;
  //s.setWidget(l);


  //ui->gridLayout_2->addWidget(s,6,1);

      //Playfield->board[1][i] = 'p';
  //  }
  /*
  for(int i=0;i<8;++i) //player2
    {
      QFrame *wpawn = new QFrame;
      wpawn->setStyleSheet("background-color: black");
      wpawn->setFixedSize(10,10);
      ui->gridLayout_2->addWidget(wpawn,1,i);

      //Playfield->board[6][i] = 'p';
    }*/

}

/*

  QString sField = "";
  for(int i = 0;i<8;++i)
    {
      qDebug() << sField;
      sField = "";
      for(int j=0;j<8;++j)
        {
          sField = sField + Playfield->board[i][j];
        }
    }

}
*/
