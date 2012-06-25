#include"login.h"

LoginDialog::LoginDialog()
{
	setupUi(this);
}

LoginDialog::~LoginDialog()
{
}

void LoginDialog::closeEvent(QCloseEvent * event)
{
	event->ignore();
	return;
}
