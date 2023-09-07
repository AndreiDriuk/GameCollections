#ifndef QBORDERGRAPHSLABEL_H
#define QBORDERGRAPHSLABEL_H

#include <QObject>
#include "qgraphslabel.h"

class QBorderGraphsLabel : public QGraphsLabel
{
    Q_OBJECT
public:
    QBorderGraphsLabel(const QPixmap &map);
};

#endif // QBORDERGRAPHSLABEL_H
