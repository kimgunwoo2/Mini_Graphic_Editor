#include "qt5gui01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt5GUI01 w;
	w.show();
	return a.exec();
}
