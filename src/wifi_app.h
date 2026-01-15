/*
* wifi_app.h
*/

#ifndef MAIN_WIFI_APP_H_
#define MAIN_WIFI_APP_H_

#include "esp_netif.h"

// Wifi application settings
#define WIFI_AP_SSID                "ESP32_AP"      // Accesspoint name
#define WIFI_AP_PASSWORD            "password"      // AP passowrd
#define WIFI_AP_CHANNEL             1               // AP Channel. For more see wifi channel wikipedia.
#define WIFI_AP_SSID_HIDDEN         0               // AP visibility
#define WIFI_AP_MAX_CONNECTIONS     5               // AP max clients
#define WIFI_AP_BEACON_INTERVAL     100             // AP beacon interval in ms. default recommended
#define WIFI_AP_IP                  "192.168.4.1"   // AP default IP address        
#define WIFI_AP_GATEWAY             "192.168.4.1"   // AP default Gateway (should be the same as the IP address)
#define WIFI_AP_NETMASK             "255.255.255.0" // AP netmask
#define WIFI_AP_BANDWIDTH           WIFI_BW_HT20    // AP Bandwidth 20 MHz (40 MHz is the other option. HT40)
#define WIFI_STA_POWER_SAVE         WIFI_PS_NONE    // WIFI_PS_NONE for no power saving
#define MAX_SSID_LENGTH             32              // Max length of SSID in bytes as per IEEE standards
#define MAX_PASSWORD_LENGTH         64              // Max length of password, IEEE standards.
#define MAX_CONNECTION_RETRIES      5               // Maximum number of connection retries before giving up

// netif object for the Station and Access Point
extern esp_netif_t* esp_netif_sta;
extern esp_netif_t* esp_netif_ap;

/*
*   Message IDs for the WiFi application task
*   @note Expand this based on your application requirements.
*/
typedef enum wifi_app_message
{
    WIFI_APP_MSG_START_HTTP_SERVER = 0,
    WIFI_APP_MSG_CONNECTING_FROM_HTTP_SERVER,
    WIFI_APP_MSG_STA_CONNECTED_GOT_IP,
} wifi_app_message_e;

/*
*   Structure for the message queue
*   @note Expand this based on application requirements e.g. and another type and parameter as required
*/
typedef struct wifi_app_queue_message
{
    wifi_app_message_e msgID;
} wifi_app_queue_message_t;

/*
*  Send the message to the queue
*  @params msgID message ID from the wifi_app_message_e enum.
*  @return pdTRUE if an item was successfully sent to the queue, otherwise pdFALSE.
*  @note Expand the parameter list based on your requirements, eg. how you've expanded the wifi_app_queue_message_t.
*/
// BaseType_t wifi_app_send_message(wifi_app_message_e msgID);
// ^^ declared in wifi_app.c

/*
*   Start the WiFi RTOS task
*/
void wifi_app_start(void);

#endif /* MAIN_WIFI_APP_H_ */
