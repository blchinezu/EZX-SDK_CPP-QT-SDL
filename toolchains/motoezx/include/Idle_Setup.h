//generated by genheader.sh write by wangbin
/********************************************************
**libezxam.so.1.0.0
**2010年 05月 03日 星期一 18:11:59 CST
*************************************************************/
#ifndef IDLE_SETUP_H
#define IDLE_SETUP_H
#include <AM_Shortcut.h>
#include <SETUP_SET_Manager.h>

class Idle_Setup :public SETUP_SET_Manager
{
public:
	Idle_Setup();
	~Idle_Setup();
	
	void getS3Info(bool&, bool&);
	void setS3Info(bool, bool);
	void setS3BaseURL(QString);
	
	void setS3AddNewURL(QString);
	bool getHideS3WhenAutoSelectFail();
	void setEnableS3Feature(bool);
	bool getS3KillStatus();
	void setS3KillStatus(bool);
		
	AM_Shortcut getShortcut(int);
	AM_Shortcut getDefaultShortcut(int);
	void setShortcut(int, QString);
	void getShortcutItem(SETUP_SET_Manager&, int);
	bool isShortcutFreeze(int);
	void setShortcutFreeze(int, bool);
	
	bool getOTAEnabled();
	bool getIgnoreOTAUrlUpdate();
	
	virtual bool flush();
	
	void doAutoSelection(bool&, bool&, bool);
	void setDisableEnableStatus(bool);
	//bool isItemAvailable(set_item_t);
	//void setItemAvailable(set_item_t, bool);
	
private:
		
	
};

#endif //IDLE_SETUP_H

