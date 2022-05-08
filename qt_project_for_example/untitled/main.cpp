#include "mainwindow.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <algorithm>
#include <QApplication>

//using namespace std;


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


