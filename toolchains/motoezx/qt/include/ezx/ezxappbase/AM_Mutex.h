//generated by genheader.sh write by wangbin
/********************************************************
**libezxappbase.so.1.0.0
**Tue Aug 24 10:20:08     2010
*************************************************************/
#ifndef AM_MUTEX_H
#define AM_MUTEX_H
#ifdef QT_THREAD_SUPPORT
#include <qthread.h>

class AM_Mutex :public QMutex
{
public:
	AM_Mutex();
	~AM_Mutex();
	
	void setNotBusy();
	bool isBusy();
	void setBusy();

};
#endif //QT_THREAD_SUPPORT
#endif //AM_MUTEX_H
