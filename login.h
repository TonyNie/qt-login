#ifndef __LOGIN_H__
#define __LOGIN_H__
#include "ui_login.h"
#include<QEvent>
#include<QCloseEvent>

class LoginDialog: public QDialog, public Ui::loginDialog
{
public:
	LoginDialog();
	~LoginDialog();
	virtual void closeEvent(QCloseEvent *event);
};


#endif
