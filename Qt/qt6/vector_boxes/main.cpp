// #include "mainwindow.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QPalette>
#include <QPushButton>

#include <iostream>

using namespace std;

QPushButton *create_button(int num) {
  // Создаем кнопку

  QString txt = QString::number(num);

  QPushButton *button = new QPushButton(txt);
  button->setFixedSize(50, 50); // Устанавливаем размер кнопки 50x50 пикселей

  // Устанавливаем синий цвет фона кнопки
  QPalette palette = button->palette();
  palette.setColor(QPalette::Button, QColor(Qt::blue));
  button->setPalette(palette);

  // Устанавливаем стиль, чтобы цвет кнопки был виден
  button->setStyleSheet(
      "QPushButton { color: white; background-color: blue; }");

  return button;
}

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QWidget w;
  QHBoxLayout *layout = new QHBoxLayout(&w);

  vector vec{1, 2, 3, 4, 5};

  vector<QPushButton*> buttons;  

  for (const auto &x : vec) {
    auto button = create_button(x);
    buttons.push_back(button);
    layout->addWidget(button);
  }

  QPushButton* b = buttons[2];
  b->setStyleSheet("QPushButton { background-color: red; color: white; }");

  w.show();
  return a.exec();
}
