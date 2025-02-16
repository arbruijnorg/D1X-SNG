/* Version defines */

#ifndef _VERS_ID
#define _VERS_ID

#define __stringize2(X)	#X
#define __stringize(X)	__stringize2(X)

#define RH_VERSION ""

#define DXX_VERSION_MAJOR __stringize(DXX_VERSION_MAJORi)
#define DXX_VERSION_MINOR __stringize(DXX_VERSION_MINORi)
#define DXX_VERSION_MICRO __stringize(DXX_VERSION_MICROi)

#define BASED_VERSION "Fork by Code"
#define VERSION DXX_VERSION_MAJOR "." DXX_VERSION_MINOR "" DXX_VERSION_MICRO
#define DESCENT_VERSION "D1X SNG 1.6 - The Leaps & Bounds Update." RH_VERSION 

extern const char g_descent_version[40];
extern const char g_descent_build_datetime[21];

#endif /* _VERS_ID */
