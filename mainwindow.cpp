#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>
#include <qmath.h>
#include <qrandom.h>
#include <QThread>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    nX = 3;
    nY = 3;

    QSize sizeFrame = ui->frame_2->size();
    for(int i =0; i<nX; ++i ){
        for(int j = 0; j<nY; ++j ){
            QLabel *label = new QLabel(ui->frame_2);
            label->setGeometry((sizeFrame.width()/nX+1)*j, (sizeFrame.height()/nY+1)*i, sizeFrame.width()/nX,  sizeFrame.height()/nY);
            vectorLabels.push_back(label);
        }
    }
    ui->frame_2->setFocusPolicy(Qt::StrongFocus);

    if ( original.load("My.jpg") )
    {
        int originalWidth = original.size().width();
        int originalSize = original.size().height();
        int minSize =std::min(originalWidth, originalSize);

        QRect cutRect(300,0,minSize, minSize );
        original = original.copy(cutRect);
        originalWidth = original.size().width();
        originalSize = original.size().height();

        for(int i = 0; i<nX; ++i){
            for(int j = 0; j<nY; ++j){
                QRect rect(originalWidth/nX*j, originalSize/nY*i, originalWidth/nX, originalSize/nY);
                QPixmap cropped = original.copy(rect);
                QSize label_size =  vectorLabels[i*nX+j]->size();
                vectorLabels[i*nX+j]->setPixmap(cropped.scaled(label_size));
                vectorLabels[i*nX+j]->show();
            }
        }
        QPixmap pixmapW(QSize(minSize/nX, minSize/nY));
        pixmapW.fill(Qt::white);
        vectorLabels[0]->setPixmap(pixmapW);
        numberEmpty =0;

    }
    else
         std::cout << "fail" << std::endl;

    mix();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{


}

void MainWindow::mix(){
     QThread::sleep(5);
    QRandomGenerator gen;
    for(int i = 0; i<1000; ++i){
        int step = gen.bounded(0, 4);
        std::cout<<step<<std::endl;
        switch (step) {
        case 0:
            if(numberEmpty<(nX*nY-nX)){
                QPixmap maptemp = vectorLabels[numberEmpty+nX]->pixmap()->copy();
                vectorLabels[numberEmpty+nX]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
                vectorLabels[numberEmpty]->setPixmap(maptemp);
                numberEmpty+=nX;
            }


            break;
        case 1:
            if(numberEmpty>(nX-1)){
                QPixmap maptemp = vectorLabels[numberEmpty-nX]->pixmap()->copy();
                vectorLabels[numberEmpty-nX]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
                vectorLabels[numberEmpty]->setPixmap(maptemp);
                numberEmpty-=nX;
            }
            break;
        case 2:{

            int t =((numberEmpty+1)%nX);
            if(((numberEmpty+1)%nX)){
                QPixmap maptemp = vectorLabels[numberEmpty+1]->pixmap()->copy();
                vectorLabels[numberEmpty+1]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
                vectorLabels[numberEmpty]->setPixmap(maptemp);
                numberEmpty++;
            }
        }
            break;
        case 3:
            if((numberEmpty%nX)){
                QPixmap maptemp = vectorLabels[numberEmpty-1]->pixmap()->copy();
                vectorLabels[numberEmpty-1]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
                vectorLabels[numberEmpty]->setPixmap(maptemp);
                numberEmpty--;
            }
            break;

        }
    }
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
//    ui->label_4->setFocus();
//    QLabel* lab =  vectorLabels[6];
//    QRect  rectangleCurrent = lab->geometry();
//    int moveY = ui->frame_2->height()/nY+1;
//    int moveX = ui->frame_2->width()/nX+1;

    switch (pe->key()) {
    case Qt::Key_Up:
        if(numberEmpty<(nX*nY-nX)){
            QPixmap maptemp = vectorLabels[numberEmpty+nX]->pixmap()->copy();
            vectorLabels[numberEmpty+nX]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
            vectorLabels[numberEmpty]->setPixmap(maptemp);
            numberEmpty+=nX;
        }


        break;
    case Qt::Key_Down:
        if(numberEmpty>(nX-1)){
            QPixmap maptemp = vectorLabels[numberEmpty-nX]->pixmap()->copy();
            vectorLabels[numberEmpty-nX]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
            vectorLabels[numberEmpty]->setPixmap(maptemp);
            numberEmpty-=nX;
        }
        break;
    case Qt::Key_Left:{

        int t =((numberEmpty+1)%nX);
        if(((numberEmpty+1)%nX)){
            QPixmap maptemp = vectorLabels[numberEmpty+1]->pixmap()->copy();
            vectorLabels[numberEmpty+1]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
            vectorLabels[numberEmpty]->setPixmap(maptemp);
            numberEmpty++;
        }
    }
        break;
    case Qt::Key_Right:
        if((numberEmpty%nX)){
            QPixmap maptemp = vectorLabels[numberEmpty-1]->pixmap()->copy();
            vectorLabels[numberEmpty-1]->setPixmap(*(vectorLabels[numberEmpty]->pixmap()));
            vectorLabels[numberEmpty]->setPixmap(maptemp);
            numberEmpty--;
        }
        break;
    default:
        std::cout<<pe->key()<<std::endl;
        QWidget::keyPressEvent(pe);
    }


}
