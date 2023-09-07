#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qpushbutton.h>
#include <QVector>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPixmap original;
    int nX;
    int nY;
    QVector<QLabel*> vectorLabels;
    QLabel* upL;
    QLabel* downL;
    QLabel* rightL;
    QLabel* leftL;
    int numberEmpty;


    //void paintEvent(QPaintEvent*);
    //void keyPressEvent(QKeyEvent* pe);

protected:
    virtual void keyPressEvent(QKeyEvent *pe);
    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
