#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        // Create a new button and set its initial text
    m_button = new QPushButton("Click me", this);
    // Set button geometry: x, y, width, height
    m_button->setGeometry(100, 100, 200, 50);

    // Connect the button's clicked signal to the onButtonClicked slot
    connect(m_button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    m_button->setText("Button clicked!");
}
