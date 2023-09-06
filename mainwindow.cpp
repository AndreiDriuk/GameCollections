#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->label_4->mousePressEvent(QMouseEvent *ev), this->changePosition(QMouseEvent *ev));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    painter.setBrush(Qt::blue);
    painter.translate(0, rect().height());

    QPixmap pixmap;
    //ui->label->setPixmap(pixmap);
    QIcon ButtonIcon(pixmap);

    if ( pixmap.load("My.jpg") )
    {
         //std::cout << "succes" << std::endl;
         ui->label->setPixmap(pixmap.scaled(pixmap.size()/20));
         ui->label_4->setPixmap(pixmap.scaled(pixmap.size()/20));
         ui->widget->setWindowIcon(ButtonIcon);
         //ui->widget->seW tIconSize(pixmap.rect().size());
         //ui->label->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
         //painter.drawPixmap( QPoint(0, -200), pixmap );
    }
    else
         std::cout << "fail" << std::endl;

//    painter.drawPie(QRect(-35, -35, 70, 70), 0, 90 * 16);//works
//    painter.drawRect(QRect(30, -5, 20, 10));            //works
}

void MainWindow::keyPressEvent(QKeyEvent *pe)
{
    //std::cout<<"Double clicked"<<std::endl;
    //std::cout<<pe->key()<<std::endl;
//    case (pe->key()):

//    QRect  rectangleCurrent = ui->label_4->geometry();
//    QRect newRect(rectangleCurrent.x()+1, rectangleCurrent.y(), rectangleCurrent.width(), rectangleCurrent.height());
//    std::cout<<rectangleCurrent.x()<<std::endl;
//    ui->label_4->move(rectangleCurrent.x()+1, rectangleCurrent.y());

    QRect  rectangleCurrent = ui->label_4->geometry();
    switch (pe->key()) {
    case Qt::Key_Up:
        ui->label_4->move(rectangleCurrent.x(), rectangleCurrent.y()-1);
        break;
    case Qt::Key_Down:
        ui->label_4->move(rectangleCurrent.x(), rectangleCurrent.y()+1);
        break;
    case Qt::Key_Left:
        ui->label_4->move(rectangleCurrent.x()-1, rectangleCurrent.y());
        break;
    case Qt::Key_Right:
        ui->label_4->move(rectangleCurrent.x()+1, rectangleCurrent.y());
        break;
    default:
        std::cout<<pe->key()<<std::endl;
        QWidget::keyPressEvent(pe);
    }
}
