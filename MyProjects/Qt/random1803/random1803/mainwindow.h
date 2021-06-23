#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <cstring>
#include <cstdio>
#include <QByteArray>
#include <QDialog>
#include <QWidget>
#include <QFont>
#include <QTimer>
#include <QAction>
#include <QMenuBar>
#include <QLineEdit>
#include <QMessageBox>
#include <QtGui>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QLabel *Numlabel;
    QFont NumFont,OtherFont;
    QAction *GenAction;
    QPushButton *btn;
    int cm[40],t;
    void initnum(){
        for(int i=1;i<=3;i++)
            cm[i]=i;
        for(int i=4;i<=33;i++)
            cm[i]=i+1;
    }
    void Rdnum();
};

#endif // MAINWINDOW_H
