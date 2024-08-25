// #include "mainwindow.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPalette>
#include <QPushButton>

#include "solution.cpp"
#include "ui_func.hpp"
#include <iostream>

using namespace std;

vector<QPushButton *> show_vector(vector<int> &vec, QHBoxLayout *layout) {
  vector<QPushButton *> buttons;

  for (const auto &x : vec) {
    auto button = create_button(x);
    buttons.push_back(button);
    layout->addWidget(button);
  }
  return buttons;
}

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QWidget w;
  QVBoxLayout *layout = new QVBoxLayout(&w);
  QHBoxLayout *layout_line1 = new QHBoxLayout();
  QHBoxLayout *layout_line2 = new QHBoxLayout();
  layout->addLayout(layout_line1);
  layout->addLayout(layout_line2);

  vector vec{1, 2, 3, 7, 8};
  int k = 4;
  int x = 3;

  Solution sl;

  auto result = sl.findClosestElements(vec, k, x);

  auto buttons1 = show_vector(vec, layout_line1);
  auto buttons2 = show_vector(result, layout_line2);

  QPushButton *b = buttons1[2];
  b->setStyleSheet("QPushButton { background-color: red; color: white; }");

  w.show();
  return a.exec();
}
