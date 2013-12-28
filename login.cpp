#include"login.h"
#include<QString>

LoginDialog::LoginDialog()
{
	Ui::loginDialog::setupUi(this);
	init();
}

LoginDialog::~LoginDialog()
{

}

void LoginDialog::setValue(int val)
{
	value = val;
}

int LoginDialog::testslot1(int a)
{
	return 0;
}

void LoginDialog::init()
{
	/* QObject::connect(this, SIGNAL(testsignal(int)), this, SLOT(testslot1(int))); */
	QObject::connect(Ui::loginDialog::loginPushButton, SIGNAL(clicked()), this, SLOT(showPasswd()));
}


void LoginDialog::showPasswd()
{
	QString passwd = Ui::loginDialog::passwdLineEdit->text();
	Ui::loginDialog::resultTextBrowser->setText(passwd);
}



