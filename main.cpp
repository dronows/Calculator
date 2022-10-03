
#include  "Calculator.h"
#include <QApplication>


int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  CallerCalculator wgt(nullptr);
  Ui::Calculator caller;
  caller.setupUi(&wgt);
  wgt.label_1 = caller.label_1;
  wgt.label_2 = caller.label_2;
  wgt.labelResult = caller.labelResult;
  wgt.value1 = caller.value1;
  wgt.value2 = caller.value2;
  wgt.outResult = caller.outResult;
  wgt.resize(300, 300);
  wgt.show();
  return QApplication::exec();

}

#include <main.moc>