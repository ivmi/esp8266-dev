#include <string.h>
#include <osapi.h>
#include "user_interface.h"
#include "mem.h"
#include "httpd.h"
#include "cgi.h"
#include "io.h"
#include "espmissingincludes.h"

//This cgi manages websocket requests
int ICACHE_FLASH_ATTR cgiWebsocket(HttpdConnData *connData) {
	os_printf("url:%s\n", connData->url);
	os_printf("getArgs:%s\n", connData->getArgs);
	os_printf("postBuff:%s\n", connData->postBuff);
	os_printf("headers:%s\n", connData->priv->head);
	
/* 	char essid[128];
	char passwd[128];
	static ETSTimer reassTimer;
	
	if (connData->conn==NULL) {
		//Connection aborted. Clean up.
		return HTTPD_CGI_DONE;
	}
	
	httpdFindArg(connData->postBuff, "essid", essid, sizeof(essid));
	httpdFindArg(connData->postBuff, "passwd", passwd, sizeof(passwd));

	os_strncpy((char*)stconf.ssid, essid, 32);
	os_strncpy((char*)stconf.password, passwd, 64);
	os_printf("Try to connect to AP %s pw %s\n", essid, passwd);

	//Schedule disconnect/connect
	os_timer_disarm(&reassTimer);
	os_timer_setfn(&reassTimer, reassTimerCb, NULL);
//Set to 0 if you want to disable the actual reconnecting bit
#ifdef DEMO_MODE
	httpdRedirect(connData, "/wifi");
#else
	os_timer_arm(&reassTimer, 1000, 0);
	httpdRedirect(connData, "connecting.html");
#endif */
	return HTTPD_CGI_DONE;
}