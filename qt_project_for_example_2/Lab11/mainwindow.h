#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_drawCircleButton_clicked();

    void on_drawTriangleButton_clicked();

    void on_drawSquareButton_clicked();


private:
    Ui::MainWindow *ui;
    int get_random_number(int min, int max);

};


#endif // MAINWINDOW_H

