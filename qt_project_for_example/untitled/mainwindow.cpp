#include "AbstractReader.h"
#include "CSVReader.h"
#include "JsonReader.h"
#include <CSVWriter.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <string>
#include <fstream>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QIODevice>
#include <iomanip>
#include <QFileDialog>
#include "Student.h"
#include "msgbox.h"


using namespace std;

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


void MainWindow::on_pushButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Text (*.csv *.json)"));
    file_name = dialog.getOpenFileName(this,
                                       tr("Open File"),
                                       "",
                                       "all (*.json *.csv);;json file (*.json);;csv file (*.csv)").toStdString();
    string file_type = file_name.substr(file_name.find_last_of(".")+1);

    if (file_type == "csv")
    {
        CSVReader myFile(file_name);
        ui->textBrowser->clear();
        if (myFile.is_open())
        {
            vector <Staffer> t_file = myFile.read();
            for (auto myObj: t_file)
            {
                ui->message->clear();
                cout<<myObj<<endl;
                ui->textBrowser->append(QString::number(myObj.getID())+ " | " +QString::fromStdString(myObj.getName()) + " | " + QString::number(myObj.getSex())+ " | " +QString::number(myObj.getYear()));
            }
        }
        else
        {
            ui->textBrowser->clear();
            ui->message->clear();
            ui->message->err_msg("Error");
        }
    }
    else if (file_type == "json")
    {
        JsonReader myFile(file_name);
        ui->textBrowser->clear();
        if (myFile.is_open())
        {
            vector <Staffer> t_file = myFile.read();
            for (auto myObj: t_file)
            {
                ui->message->clear();
                cout<<myObj<<endl;
                ui->textBrowser->append(QString::number(myObj.getID())+ " | " +QString::fromStdString(myObj.getName()) + " | " + QString::number(myObj.getSex())+ " | " +QString::number(myObj.getYear()));

            }
        }
        else
        {
            ui->textBrowser->clear();
            ui->message->clear();
            ui->message->err_msg("Error");
        }
    }
    else exit(0);
}

void MainWindow::on_pushButton_2_clicked() // only for CSV
{
    CSVReader myFile("db_example.csv");
    if (myFile.is_open())
    {
        ui->textBrowser->clear();
        vector <Staffer> t_file = myFile.read();
        bool x = true;
        for (auto myObj: t_file)
        {
            if (ui->lineEdit->text().toStdString()==myObj.getName())
            {
                x = false;
                ui->message->clear();
                ui->textBrowser->append(QString::number(myObj.getID()) +  " | " +QString::fromStdString(myObj.getName()) + " | " + QString::number(myObj.getSex())+ " | " +QString::number(myObj.getYear()));
            }
        }
        if (x)
        {
            ui->textBrowser->clear();
            ui->message->clear();
            ui->message->err_msg("Name is not found");
        }
    }
    else
    {
        ui->textBrowser->clear();
        ui->message->clear();
        ui->message->err_msg("File is not open");
    }
}

void MainWindow::on_pushButton_3_clicked() // only for CSV
{
    if(ui->lineEdit_Name->text() == "" || ui->CB_SEX->currentText() == "" || ui->CB_YEAR->currentText() == ""/* || ui->CB_TYPE->currentText() == ""*/ )
    {
        ui->textBrowser->clear();
        ui->message->clear();
        ui->message->err_msg("Error");
    }
    else
    {
        ui->textBrowser->clear();
        CSVWriter writeFile("db_example.csv");
        CSVReader myFile("db_example.csv");
        vector <Staffer> t_file = myFile.read();
        Staffer S1(ui->lineEdit_Name->text().toStdString(),static_cast<sex>(stoi(ui->CB_SEX->currentText().toStdString())),stoi(ui->CB_YEAR->currentText().toStdString()));
            for (auto myObj: t_file)
            {
                    writeFile.write(S1);
                    ui->message->clear();
                    ui->textBrowser->append("Congratulations!");
                    break;
            }
    }
}

