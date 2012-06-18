#ifndef __LOGIN_H__
#define __LOGIN_H__
#include "ui_login.h"

class LoginDialog: public QDialog, public Ui::loginDialog
{
public:
	LoginDialog();
	~LoginDialog();
};


#endif
