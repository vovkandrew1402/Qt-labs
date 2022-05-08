#include "figurepainter.h"
#include <QMouseEvent>
#include <QMenu>
#include <iostream>
FigurePainter::FigurePainter(QWidget *parent) : QWidget(parent)
{
    this->setMouseTracking(true);
}
void FigurePainter::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this);
    for (const std::unique_ptr<Figure> &figure:figures_) {

        if  (figure.get()->isPointInFigure(cursor)) {
            painter.setPen(selectColor_);
            figure.get()->draw(painter);
            painter.setPen(baseColor_);
        }
        else figure.get()->draw(painter);
    }
}

void FigurePainter::mousePressEvent(QMouseEvent *event) {

    if (event->buttons() & Qt::RightButton){

        QMenu * menu = new QMenu(this);
        QAction * infoAction = new QAction("Информация о фигурах");
        QAction * deleteAction = new QAction("Удалить фигуры");
        connect(infoAction,&QAction::triggered,this,&FigurePainter::printInfo);
        connect(deleteAction,&QAction::triggered,this,&FigurePainter::deleteFigures);
        menu->addAction(infoAction);
        menu->addAction(deleteAction);
        menu->exec(QCursor::pos());

}
}

void FigurePainter::addFigure(std::unique_ptr<Figure> figure){
    figures_.push_back(std::move(figure));
}

void FigurePainter::mouseMoveEvent(QMouseEvent *event){
    if (!(event->buttons() & Qt::LeftButton)){
        cursor = event->pos();

    }
    else {
        for (const std::unique_ptr<Figure> &figure:figures_) {
            if  (figure.get()->isPointInFigure(cursor)) {
                figure.get()->move(event->pos()-cursor);
            }
        }
        cursor = event->pos();
    }
    update();

}

void FigurePainter::printInfo(){
    QMessageBox msgbox;
    std::string text="";
    for (const std::unique_ptr<Figure> &figure:figures_) {
        if  (figure.get()->isPointInFigure(cursor)) {
            text=text+figure.get()->info()+"\n";
        }
    }
    msgbox.setText(QString::fromStdString(text));
    if (text!="") msgbox.exec();
}

void FigurePainter::deleteFigures(){
    std::list<std::unique_ptr<Figure>>::iterator iter = figures_.begin();
    for (iter=figures_.begin();iter!=figures_.end();++iter) {
        if  (iter->get()->isPointInFigure(cursor)) {
            figures_.remove(*iter);
        }
    }
    update();
}


