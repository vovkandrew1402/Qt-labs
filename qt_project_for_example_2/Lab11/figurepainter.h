#ifndef FIGUREPAINTER_H
#define FIGUREPAINTER_H

#include <QWidget>
#include <QPainter>
#include "figure.h"
#include <QMessageBox>
class FigurePainter : public QWidget
{
    Q_OBJECT
public:
    explicit FigurePainter(QWidget *parent = nullptr);
    QPainter& getPainter();
    void addFigure(std::unique_ptr<Figure> figure);

signals:
    void newCoordiantes(QPointF coordinates);

private slots:
    void printInfo();
    void deleteFigures();

private:
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mousePressEvent(QMouseEvent* event) override;
    virtual void paintEvent(QPaintEvent *event) override;
    std::list<std::unique_ptr<Figure>> figures_;
    QColor baseColor_ = Qt::black;
    QColor selectColor_ = Qt::red;
    QPoint cursor;

};

#endif // FIGUREPAINTER_H
