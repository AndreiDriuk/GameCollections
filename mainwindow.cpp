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


    QSize sizeFrame = ui->frame_2->size();
    ui->label->setGeometry(0, 0, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_2->setGeometry(sizeFrame.width()/3+1, 0, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_3->setGeometry(sizeFrame.width()/3*2+2, 0, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_4->setGeometry(0, sizeFrame.height()/3+1, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_5->setGeometry(sizeFrame.width()/3+1,sizeFrame.height()/3+1, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_6->setGeometry(sizeFrame.width()/3*2+2, sizeFrame.height()/3+1, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_7->setGeometry(0, sizeFrame.height()/3*2+2, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_8->setGeometry(sizeFrame.width()/3+1, sizeFrame.height()/3*2+2, sizeFrame.width()/3,  sizeFrame.height()/3);
    ui->label_9->setGeometry(sizeFrame.width()/3*2+2, sizeFrame.height()/3*2+2, sizeFrame.width()/3,  sizeFrame.height()/3);

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

    //QIcon ButtonIcon(pixmap);

    if ( original.load("My.jpg") )
    {
        int originalWidth = original.size().width();
        int originalSize = original.size().height();

        QRect rect1(0, 0, originalWidth/3, originalSize/3);
        QPixmap cropped1 = original.copy(rect1);

        QRect rect2(originalWidth/3, 0, originalWidth/3, originalSize/3);
        QPixmap cropped2 = original.copy(rect2);

        QRect rect3(originalWidth/3*2, 0, originalWidth/3, originalSize/3);
        QPixmap cropped3 = original.copy(rect3);

        QRect rect4(0, originalSize/3, originalWidth/3, originalSize/3);
        QPixmap cropped4 = original.copy(rect4);

        QRect rect5(originalWidth/3, originalSize/3, originalWidth/3, originalSize/3);
        QPixmap cropped5 = original.copy(rect5);

        QRect rect6(originalWidth/3*2, originalSize/3, originalWidth/3, originalSize/3);
        QPixmap cropped6 = original.copy(rect6);

        QRect rect7(0, originalSize/3*2, originalWidth/3, originalSize/3);
        QPixmap cropped7 = original.copy(rect7);

        QRect rect8(originalWidth/3, originalSize/3*2, originalWidth/3, originalSize/3);
        QPixmap cropped8 = original.copy(rect8);

        QRect rect9(originalWidth/3*2, originalSize/3*2, originalWidth/3, originalSize/3);
        QPixmap cropped9 = original.copy(rect9);

        //QSize sImage = pixmap.size();
        QSize label_size =  ui->label->size();
        QSize label2_size = ui->label_2->size();
        QSize label3_size = ui->label_3->size();
        QSize label4_size = ui->label_4->size();
        QSize label5_size = ui->label_5->size();
        QSize label6_size = ui->label_6->size();
        QSize label7_size = ui->label_7->size();
        QSize label8_size = ui->label_8->size();
        QSize label9_size = ui->label_9->size();
        //int heightImage = sImage;
         //std::cout << "succes" << std::endl;
         ui->label->setPixmap(cropped1.scaled(label_size));
         ui->label_2->setPixmap(cropped2.scaled(label2_size));
         ui->label_3->setPixmap(cropped3.scaled(label3_size));
         ui->label_4->setPixmap(cropped4.scaled(label4_size));
         ui->label_5->setPixmap(cropped5.scaled(label5_size));
         ui->label_6->setPixmap(cropped6.scaled(label6_size));
         ui->label_7->setPixmap(cropped7.scaled(label7_size));
         ui->label_8->setPixmap(cropped8.scaled(label8_size));
         ui->label_9->setPixmap(cropped9.scaled(label9_size));
         //ui->widget->setWindowIcon(ButtonIcon);
         //ui->pushButton->setIcon(ButtonIcon);
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
    int moveY = ui->frame_2->height()/3+1;
    int moveX = ui->frame_2->width()/3+1;
    switch (pe->key()) {
    case Qt::Key_Up:
        ui->label_4->move(rectangleCurrent.x(), rectangleCurrent.y()-moveY);
        std::cout<<"Up"<<std::endl;
        break;
    case Qt::Key_Down:
        ui->label_4->move(rectangleCurrent.x(), rectangleCurrent.y()+moveY);
        std::cout<<"Down"<<std::endl;
        break;
    case Qt::Key_Left:
        std::cout<<"left"<<std::endl;
        ui->label_4->move(rectangleCurrent.x()-moveX, rectangleCurrent.y());
        break;
    case Qt::Key_Right:
        std::cout<<"Right"<<std::endl;
        ui->label_4->move(rectangleCurrent.x()+moveX, rectangleCurrent.y());
        break;
    default:
        std::cout<<pe->key()<<std::endl;
        QWidget::keyPressEvent(pe);
    }


}
