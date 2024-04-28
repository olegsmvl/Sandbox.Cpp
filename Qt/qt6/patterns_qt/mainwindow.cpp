#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  resize(400, 400);
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

class Circle {
public:
  int size = 150;
  Qt::GlobalColor color = Qt::red;
};

class Square {
public:
  int size = 100;
  Qt::GlobalColor color = Qt::blue;
};

class Composition {
public:
  Circle get_circle() { return c; }
  Square get_square() { return s; }

  void set_circle(Circle circle) { c = circle; }
  void set_square(Square square) { s = square; }

private:
  Circle c;
  Square s;
};

class CompositionBuilder {
public:
  virtual ~CompositionBuilder() {}
  virtual void build_circle() = 0;
  virtual void build_square() = 0;
  virtual Composition *get_composition() = 0;
};

class BigFiguresBuilder : public CompositionBuilder {
public:
  BigFiguresBuilder() { compos = new Composition(); }
  ~BigFiguresBuilder() { delete compos; }

  void build_circle() override { compos->set_circle(Circle{250, Qt::yellow}); }
  void build_square() override { compos->set_square(Square{200, Qt::green}); };
  Composition *get_composition() override { return compos; }

private:
  Composition *compos;
};

class SmallFiguresBuilder : public CompositionBuilder {
public:
  SmallFiguresBuilder() { compos = new Composition(); }
  ~SmallFiguresBuilder() { delete compos; }

  void build_circle() override { compos->set_circle(Circle{25, Qt::blue}); }
  void build_square() override { compos->set_square(Square{50, Qt::magenta}); };
  Composition *get_composition() override { return compos; }

private:
  Composition *compos;
};

class Director {
public:
  void setBuilder(CompositionBuilder *newBuilder) { builder = newBuilder; }
  Composition *construct() {
    builder->build_circle();
    builder->build_square();
    return builder->get_composition();
  }

private:
  CompositionBuilder *builder;
};

void MainWindow::paintEvent(QPaintEvent *event) {
  QPainter painter(this);

  painter.setRenderHint(QPainter::Antialiasing); // For smooth rendering
  painter.setPen(Qt::black);                     // Outline color

  Director director;
  SmallFiguresBuilder builder;
  director.setBuilder(&builder);

  Composition *cx = director.construct();

  auto c = cx->get_circle();
  painter.setBrush(c.color); // Fill color
  painter.drawEllipse(100, 100, c.size, c.size);

  auto s = cx->get_square();
  painter.setBrush(s.color); // Fill color
  painter.drawRect(400, 100, s.size, s.size);
}