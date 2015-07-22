//generated by genheader.sh write by wangbin
/********************************************************
**libezxaid.so.1.0.0
**2010年 06月 24日 星期四 17:07:01 CST
*************************************************************/
//--------------------------------------------------------------------------------------------------
//                                                                               
//   Header Name: MF_SF_FileName.h
//
//   General Description: General description of the contents of this header file. 
//
//	This class is used for inter-processes mutex
//	Qt only provides mutex within process
//--------------------------------------------------------------------------------------------------
//
//                            Motorola Confidential Proprietary
//                   Template ID and version: IL93-TMP-01-0107  Version 1.10
//                    (c) Copyright Motorola XXXX-XXXX, All Rights Reserved
//   
//
// Revision History:
//                             Modification     Tracking
// Author (core ID)                Date          Number     Description of Changes
// -------------------------   ------------    ----------   ----------------------------------------
// Developer Name/ID            MM/DD/YYYY     CSGceXXXXX   BRIEF description of changes made   
//
// Tim Zhao/w19411		12/25/2002		    created first time
//
//
//--------------------------------------------------------------------------------------------------

#ifndef __AM_THEMEPACKAGEMANAGER_H__
#define __AM_THEMEPACKAGEMANAGER_H__

#ifndef __cplusplus
#error "This is a C++ header file; it requires C++ to compile."
#endif

#include "AM_PackageManager.h"

class AM_ThemePackageManager : public AM_PackageManager
{
public:
    AM_ThemePackageManager();
	~AM_ThemePackageManager();
    bool install( const QString &themePackageFile, AM_Global::Device device = AM_Global::Flash2 );

protected:

private:

};

#endif // __AM_THEMEPACKAGEMANAGER_H__
