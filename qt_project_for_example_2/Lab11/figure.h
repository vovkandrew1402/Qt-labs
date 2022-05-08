#ifndef FIGURE_H
#define FIGURE_H
#include <vector>
#include <QPainter>
class Figure
{
public:
    Figure();
    virtual void draw(QPainter& painter)=0;
    virtual bool isPointInFigure(QPoint cursor)=0;
    virtual std::string info()=0;
    virtual void move (QPoint cursor) =0;
};

class Circle : public Figure {

public:
    Circle();
    Circle(QPoint point, int r);
    virtual void draw(QPainter& painter) override;
    virtual bool isPointInFigure(QPoint cursor) override;
    virtual std::string info() override;
    virtual void move (QPoint cursor) override;
private:
    QPoint point_;
    int r_=0;
};

class Triangle : public Figure {
public:
    Triangle();
    Triangle(std::array<QPoint,3> coordinates);
    virtual void draw(QPainter& painter) override;
    virtual bool isPointInFigure(QPoint cursor) override;
    virtual std::string info() override;
    virtual void move (QPoint cursor) override;
private:
    std::array<QPoint,3> coordinates_;
};

class Square : public Figure {
public:
    Square();
    Square(QPoint point, int a);
    virtual void draw(QPainter& painter) override;
    virtual bool isPointInFigure(QPoint cursor) override;
    virtual std::string info() override;
    virtual void move (QPoint cursor) override;
private:
    QPoint point_;
    int a_=0;
};

#endif // FIGURE_H
