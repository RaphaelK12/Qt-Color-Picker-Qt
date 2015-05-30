#ifndef COLORPROCESSOR_H
#define COLORPROCESSOR_H

#include <QtCore>
#include <QColor>
#include <QObject>

#include "huebar.h"
#include "satvalueselector.h"

class ColorProcessor : public QObject
{
  Q_OBJECT

public:
  explicit ColorProcessor(HueBar* hueBar, SatValueSelector* satValueSelector, QObject* parent=0);

  QString getHSV(QColor color);
  QString getRGB(QColor color);
  QString getCMYK(QColor color);
  QString getHex(QColor color);

  void updateColorHSV(QString HSV);
  void updateColorRGB(QString RGB);
  void updateColorCMYK(QString CMYK);
  void updateColorHex(QString Hex);
  
  void updateColor(QColor color);
  
signals:
  void updateFinished();

private:
  HueBar* hueBar;
  SatValueSelector* satValueSelector;
  
  QColor getColorHSV(QString HSV);
  QColor getColorRGB(QString RGB);
  QColor getColorCMYK(QString CMYK);
  QColor getColorHex(QString Hex);

};

#endif // COLORPROCESSOR_H