//generated by genheader.sh write by wangbin
/********************************************************
**libezxaddrbk.so.1.0.0
**2010年 05月 01日 星期六 12:31:05 CST
*************************************************************/
#ifndef ADDRBK_SELCOPY2DLG_H
#define ADDRBK_SELCOPY2DLG_H

#include <ZBaseDialog.h>

class ADDRBK_SelCopy2Dlg :public ZBaseDialog
{
public:
	static QString getSelect();
	
	ADDRBK_SelCopy2Dlg(QString, QString, QString);
	ADDRBK_SelCopy2Dlg();
	~ADDRBK_SelCopy2Dlg();
signals:
	void okClicked();

private:
	char x[256];
	
};

#endif //ADDRBK_SELCOPY2DLG_H
