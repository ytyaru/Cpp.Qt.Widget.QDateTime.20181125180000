#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDateTime dateTimeUtc = QDateTime::currentDateTimeUtc();
    qDebug()<<dateTimeUtc.date().toString("yyyy-MM-dd");
    qDebug()<<dateTimeUtc.time().toString("HH:mm:ss");
    QDateTime dateTime = QDateTime::currentDateTime();
    qDebug()<<dateTime.date().toString("yyyy-MM-dd");
    qDebug()<<dateTime.time().toString("HH:mm:ss");
}

MainWindow::~MainWindow()
{
    delete ui;
}
