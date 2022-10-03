

#pragma once

#include <iostream>
#include <QWidget>
#include <QPushButton>
#include <QStack>
#include "./ui_calculator.h"

class CallerCalculator : public QWidget {
  Q_OBJECT
 public: 
   CallerCalculator(QWidget* parent = nullptr) : QWidget(parent) {}
   QLabel* label_1 = nullptr;
   QLabel* label_2 = nullptr;
   QLabel* labelResult = nullptr;

   QLineEdit* value1 = nullptr;
   QLineEdit* value2 = nullptr;
   QLineEdit* outResult = nullptr;
   QString calculate();
 public slots :
   void slotButtonClicked();
private:
  
  QString strDisplay;
  QStack <QString> stk;
};
