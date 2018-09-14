#include "baiduApiTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	baiduApiTest w;
	w.show();
	return a.exec();
}
