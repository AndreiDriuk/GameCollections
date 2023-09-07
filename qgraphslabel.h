#ifndef QGRAPHSLABEL_H
#define QGRAPHSLABEL_H

#include <QObject>
#include <QLabel>
#include <QImage>
#include <QPixmap>

class QGraphsLabel : public QLabel
{
    Q_OBJECT
public:
    QGraphsLabel(const QPixmap &map);
    void setPixmap();
    QPixmap getPixmap();

private:
    QPixmap mapLabel;
};

#endif // QGRAPHSLABEL_H
