#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



int MainWindow::get_random_number(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
void MainWindow::on_drawCircleButton_clicked()
{   
    QPoint point(get_random_number(20,this->size().width()-220),
                 get_random_number(20,this->size().height()-320));
    int r =get_random_number(20,200);
    ui->drawPanel->addFigure(std::unique_ptr<Figure>(new Circle(point,r)));
    ui->drawPanel->update();
}


void MainWindow::on_drawTriangleButton_clicked()
{
    std::array<QPoint,3> points;
    for (int i=0;i<3;i++) {
        points.at(i).setX(get_random_number(20,this->size().width()-20));
        points.at(i).setY(get_random_number(20,this->size().height()-120));
    }
    ui->drawPanel->addFigure(std::unique_ptr<Figure>(new Triangle(points)));
    ui->drawPanel->update();
}

void MainWindow::on_drawSquareButton_clicked()
{
    QPoint point(get_random_number(20,this->size().width()-220),
                 get_random_number(20,this->size().height()-320));
    int a =get_random_number(20,200);
    ui->drawPanel->addFigure(std::unique_ptr<Figure>(new Square(point,a)));
    ui->drawPanel->update();
}







































