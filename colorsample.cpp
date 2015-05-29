#include "colorsample.h"

#include <QPainter>
#include <QDebug>

ColorSample::ColorSample(QWidget *parent) :
  QWidget(parent)
{
//  color.setHsv(0, 0, 0);
  color.setHsv(0, 255, 255);
}

void ColorSample::changeColor(QColor color)
{
  this->color=color;
  update();
}

void ColorSample::paintEvent(QPaintEvent *event)
{
  QPainter p(this);
  p.setPen(Qt::NoPen);
  p.setBrush(color);
  p.drawRect(0, 0, width(), height());
}
