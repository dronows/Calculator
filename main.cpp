
#include  "Calculator.h"
#include <QApplication>


int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  CallerCalculator wgt(nullptr);
  wgt.resize(300, 300);
  wgt.show();
  return a.exec();
}

#include <main.moc>