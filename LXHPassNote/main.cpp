#include "LXHPassNote.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LXHPassNote w;
	w.show();
	return a.exec();
}
