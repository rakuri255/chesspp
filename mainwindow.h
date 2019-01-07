#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*
 * Code Training
 * Chess game with cpp
 *
 */

#include <QMainWindow>
#include "figures.h"
#include "enums.h"


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
    void push_back_amount(const enum_player& player, const Figures& figure, const int& amount); //push figures to list

    //lists
    std::list<Figures> list_player_one; // set of figures for player one
    std::list<Figures> list_player_two; // set of figures for player two

    //!<brief> check for usage
    Figures *figures_;
    void setFigureType(const enumFigures& type);
};

#endif // MAINWINDOW_H
