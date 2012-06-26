#ifndef __LOGIN_H__
#define __LOGIN_H__
#include "ui_login.h"

class LoginDialog: public QDialog, public Ui::loginDialog 
{
	Q_OBJECT
public:
	LoginDialog();
	~LoginDialog();
	void init();
signals:
	void valueChanged(int value);
	int testsignal(int a);
public slots:
	void setValue(int val);
	int testslot1(int a);
private slots:
	void showPasswd();

private:
	int value;
};



#endif
