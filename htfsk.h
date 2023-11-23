

#ifndef  __HTFSK_H__
#define  __HTFSK_H__



#define SOCKET_NAME "htfsk"
typedef void * (* func_pointer)(void *arg);



#define DEV_PATH_POWER_STRIKE    "/dev/input/event1"
#define DEV_PATH2                "/dev/input/event2"
#define DEV_PATH_TOUCH_SCREEN    "/dev/input/event3"
#define OLD_APK_RES_BACKUP_PATH   "/data/data/xxx/files/"
#define REINSTALL_APK_PATH_LEN strlen("pm install -r /data/a.apk") 

#define DAEMON_VERSION   "V1.03"

#define TAG  "htfsk"
#define RELEASE_VERSION 1 
#undef RELEASE_VERSION


#define DEBUG_INJECT 1
#undef DEBUG_INJECT   

#define HTFSK_DBG 1
//#undef HTFSK_DBG 



typedef unsigned char   U8;
typedef unsigned char   u8;

typedef unsigned short  U16;
typedef unsigned int    U32;
typedef unsigned long long    U64;





#endif










