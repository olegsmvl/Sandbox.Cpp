#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , astar(new AStar(20, 20)) // Example grid size 20x20
    , scene(new QGraphicsScene(this))
{
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    drawGrid();

    connect(ui->findPathButton, &QPushButton::clicked, this, &MainWindow::on_findPathButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete astar;
    delete scene;
}

void MainWindow::drawGrid() {
    for (int x = 0; x < 20; ++x) {
        for (int y = 0; y < 20; ++y) {
            if (astar->grid[y][x]) {
                scene->addRect(x * 20, y * 20, 20, 20, QPen(Qt::black));
            } else {
                scene->addRect(x * 20, y * 20, 20, 20, QPen(Qt::black), QBrush(Qt::black));
            }
        }
    }
}

void MainWindow::drawPath(const std::vector<Node>& path) {
    for (const Node& node : path) {
        scene->addRect(node.x * 20, node.y * 20, 20, 20, QPen(Qt::green), QBrush(Qt::green));
    }
}


void MainWindow::on_findPathButton_clicked() {
    scene->clear();
    drawGrid();
    std::vector<Node> path = astar->findPath(0, 0, 19, 19); // Example start (0,0) and end (19,19)
    drawPath(path);
}
