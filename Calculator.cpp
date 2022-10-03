// Calculator.cpp: определяет точку входа для приложения.
//

#include "Calculator.h"

//========================================
QString  CallerCalculator::calculate() {
  bool ok = true;
  qreal val_2 = stk.pop().toDouble(&ok);
  if (!ok) return "value_2 invalid";
  QString operation = stk.pop();
  qreal val_1 = stk.pop().toDouble(&ok);
  if (!ok) return "value_1 invalid";
  qreal result = 0;
  if (operation == "+") return QString::number(val_1 + val_2);
  if (operation == "-") return QString::number(val_1 - val_2);
  if (operation == "/") return QString::number(val_1 / val_2);
  if (operation == "*") return QString::number(val_1 * val_2);
}
//===========================================================
void CallerCalculator::slotButtonClicked() {
  QString str = ((QPushButton*)sender())->text();
  if (str == "CE") {
    label_1->setStyleSheet("QLabel { color : black; }");
    stk.clear();
    strDisplay = "";
    value1->setText(strDisplay);
    value2->setText(strDisplay);
    outResult->setText("0");
    return;
  }
  if (stk.count() == 0) {
    label_1->setStyleSheet("QLabel { color : red; }");
    stk.push(value1->text());
    stk.push(str);
    stk.push(value2->text());
  }
  else {
    stk.push(str);
    stk.push(value1->text());
  }

  value1->setText("");
  value2->setText("");
  outResult->setText(calculate());
  stk.push(outResult->text());

}

