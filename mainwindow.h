#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*
 * Code Training
 * Chess game with cpp
 *
 */

#include <QMainWindow>
#include "figures.h"
#include "figuresfactory.h"
#include "enums.h"
#include "playfield.h"
 #include <QGridLayout>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //init functions
    void initFigures(); //init the figures and default behaviors
    void drawPlayfield();
    void placeFigure(const enumFigures&, const enum_player&, const int&, const int&);
    void clearPlayfield();
    void push_back_amount(const enum_player& player, Figures *figure, const int& amount); //push figures to list

    //lists
    std::list<Figures*> list_player_one; // set of figures for player one
    std::list<Figures*> list_player_two; // set of figures for player two
    std::vector<Figures*> vector_beaten_figures_player_one;
    std::vector<Figures*> vector_beaten_figures_player_two;

    playfield *Playfield;
};

#endif // MAINWINDOW_H
