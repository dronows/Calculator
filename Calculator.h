

#pragma once

#include <iostream>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QStack>
#include "./ui_calculator.h"

class CallerCalculator : public QWidget ,public Ui::Calculator{
  Q_OBJECT
 public: 
   CallerCalculator(QWidget* parent = nullptr) : QWidget(parent) {
     setupUi(this);
   }
   QString calculate();
 public slots :
   void slotButtonClicked();
private:
  
  QString strDisplay;
  QStack <QString> stk;
};
