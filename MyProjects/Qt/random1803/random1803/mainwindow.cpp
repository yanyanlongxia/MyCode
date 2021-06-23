#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
        t=0;
        this->setWindowTitle(tr("随机数生成"));
        this->resize(576,680);
        srand(time(0));
        initnum();
        //pixmap=new QPixmap("img/bg.jpg");
        //palette=this->palette();
        this->setAutoFillBackground(true);
        QPalette palette = this->palette();
        palette.setBrush(QPalette::Window,QBrush(QPixmap(":/img/bg.png").scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
        this->setPalette(palette);
        //this->setStyleSheet("border-image:url(:/img/bg.png);" );
        QPalette pe;
        pe.setColor(QPalette::WindowText,QColor::fromRgb(159, 124, 198));
        NumFont.setPixelSize(400);
        OtherFont.setPixelSize(20);
        Numlabel=new QLabel(this);
        Numlabel->setPalette(pe);
        Numlabel->setText(tr("0"));
        Numlabel->setAlignment(Qt::AlignCenter);
        Numlabel->move(0,-50);
        Numlabel->resize(576,680);
        Numlabel->setFont(NumFont);
        btn=new QPushButton(this);
        btn->setText("生成");
        btn->resize(100,50);
        btn->move(240,500);
        //btn->setStyleSheet();
        //GenAction=new QAction(QIcon(),tr("生成"),this);
        //QMenu *menu=menuBar()->addMenu(tr("Start"));
        //menu->addAction(GenAction);
        connect(btn,&QPushButton::clicked,this,&MainWindow::Rdnum);
}
MainWindow::~MainWindow()
{

}

void MainWindow::Rdnum(){
    t++;
    int a=rand()%33+1;
    if(t==1)
        a=33;
    if(t==2)
        a=27;
    char str[10];
    sprintf(str,"%d",cm[a]);
    Numlabel->setText(str);
}
