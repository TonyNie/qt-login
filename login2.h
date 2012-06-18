#ifndef __LOGIN2_H__
#define __LOGIN2_H__
#include"ui_login.h"

class Login2Dialog:public QDialog
{
public:
	Login2Dialog(){ loginUi.setupUi(this);}
	~Login2Dialog() {};
private:
	Ui::loginDialog loginUi;
};

#endif
