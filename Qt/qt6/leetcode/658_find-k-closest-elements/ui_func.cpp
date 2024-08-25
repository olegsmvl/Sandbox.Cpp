#include <QApplication>
#include <QHBoxLayout>
#include <QPalette>
#include <QPushButton>

#include <iostream>

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