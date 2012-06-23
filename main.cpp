#include <QApplication>
#include <QLabel>
#include <QTextCodec>
#include <QTranslator>
#include <iostream>
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
	QApplication app(argc, argv);
	QTranslator translator;
	QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));
	QString locale = QLocale::system().name();


	translator.load(QString("login_") + locale);
	app.installTranslator(&translator);

	LoginDialog dl;
	dl.show();
	return app.exec();
}

