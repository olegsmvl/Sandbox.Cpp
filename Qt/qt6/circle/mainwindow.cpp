#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    resize(400, 400);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // For smooth rendering
    painter.setPen(Qt::black); // Outline color
    painter.setBrush(Qt::red); // Fill color

    // Draw a circle centered in the window
    int size = qMin(width(), height()) - 20; // Ensure the circle fits within the window
    painter.drawEllipse((width() - size) / 2, (height() - size) / 2, size, size);
}