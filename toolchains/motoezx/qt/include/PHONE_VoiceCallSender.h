//generated by genheader.sh write by wangbin
/********************************************************
**libezxappsdk.so.1.0.0
**2010年 07月 07日 星期三 10:44:16 CST
*************************************************************/
#ifndef PHONE_VOICECALLSENDER_H
#define PHONE_VOICECALLSENDER_H

class PHONE_VoiceCallSender
{
public:
	PHONE_VoiceCallSender();
	virtual ~PHONE_VoiceCallSender();
	
	void dropCall();
	void makeCall(char const*, QString const&, bool, int);
	void makeCall(char const*, int);
};

#endif //PHONE_VOICECALLSENDER_H
