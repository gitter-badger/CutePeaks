#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "PeaksView.h"
#include <QScrollArea>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public Q_SLOTS:
    void setFilename(const QString& filename);


private:
    PeaksView * mView;
    QScrollArea * mArea;

};

#endif // MAINWINDOW_H
