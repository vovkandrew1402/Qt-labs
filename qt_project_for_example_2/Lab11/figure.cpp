#include "figure.h"
#include <iostream>
Figure::Figure()
{

}

Circle::Circle(){

}
Circle::Circle(QPoint point, int r):point_(point),r_(r) {

}

void Circle::draw(QPainter &painter) {
    painter.drawEllipse(point_,r_,r_);
}

bool Circle::isPointInFigure(QPoint cursor) {
    return (point_.x()-cursor.x())*(point_.x()-cursor.x())
            +(point_.y()-cursor.y())*(point_.y()-cursor.y())<=r_*r_;
}

std::string Circle::info() {
    return "Circle wirh centre in point ("+std::to_string(point_.x())+";"+std::to_string(point_.y())+") and radious = "+std::to_string(r_);
}
void Circle::move(QPoint cursor) {
    point_.setX(point_.x()+cursor.x());
    point_.setY(point_.y()+cursor.y());
}

Triangle::Triangle(std::array<QPoint,3> coordinates){
    for (int i=0;i<3;i++) {
        coordinates_.at(i).setX(coordinates.at(i).x());
        coordinates_.at(i).setY(coordinates.at(i).y());
    }
}

void Triangle::draw(QPainter &painter) {
    for (int i=0;i<3;i++) {
        painter.drawLine(coordinates_[i%3],coordinates_[(i+1)%3]);
    }
}




bool Triangle::isPointInFigure(QPoint cursor) {

    int res = 0;
    for (int i=0;i<3;i++) {
        if ((cursor.x() - coordinates_[i%3].x()) * (coordinates_[(i+1)%3].y() - coordinates_[i%3].y()) - (cursor.y() - coordinates_[i%3].y()) * (coordinates_[(i+1)%3].x() - coordinates_[i%3].x())>=0)
            res += 1;
        else
            res -=1;
    }

    return abs(res) == 3;
}




std::string Triangle::info() {
    std::string res ="Triangle with apex in next points: ";
    for (int i=0;i<3;i++) {
        if (i!=2)
            res+="("+std::to_string(coordinates_[i].x())+";"+std::to_string(coordinates_[i].y())+"),";
        else
            res+="("+std::to_string(coordinates_[i].x())+";"+std::to_string(coordinates_[i].y())+")";
    }
    return res;
}
void Triangle::move(QPoint cursor) {
    for (int i=0;i<3;i++){
        coordinates_[i]+=cursor;
    }
}

Square::Square(){
   
}
Square::Square(QPoint point, int a):point_(point),a_(a){

}
void Square::draw(QPainter &painter) {
    painter.drawRect(point_.x(),point_.y(),a_,a_);
}

bool Square::isPointInFigure(QPoint cursor) {
    return (cursor.x()-point_.x()>0&&cursor.y()-point_.y()>0)
            &&(cursor.x()-point_.x()<a_&&cursor.y()-point_.y()<a_);
}

std::string Square::info() {
    return "Square with top left corner in point ("+std::to_string(point_.x())+";"+std::to_string(point_.y())+") and side = " + std::to_string(a_);
}

void Square::move(QPoint cursor) {
    point_.setX(point_.x()+cursor.x());
    point_.setY(point_.y()+cursor.y());
}














