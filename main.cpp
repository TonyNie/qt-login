#include <QApplication>
#include <QLabel>
#include "login.h"
#include "login2.h"
#include "ui_login.h"


int test1(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QDialog dl; 
	Ui::loginDialog ui; 

	ui.setupUi(&dl);
	dl.show();

	return app.exec();
}

int test2(int argc, char *argv[])
{
	QApplication app(argc, argv);
	LoginDialog dl;

	dl.show();
	return app.exec();

}

int test3(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Login2Dialog dl;

	dl.show();

	return app.exec();
}

int main(int argc, char *argv[])
{
	/* return test1(argc, argv); */
	/* return test2(argc, argv); */
	return test3(argc, argv);
}

