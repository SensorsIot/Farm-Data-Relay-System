//  FARM DATA RELAY SYSTEM
//
//  GATEWAY 2.000 Configuration

#include "defaults.h"

#define UNIT_MAC     0x00  // THIS UNIT

//Actions -- Define what happens when a packet arrives at each interface:
//Current function options are: sendESPNOW(MAC), sendSerial(), sendMQTT(), bufferESPNOW(interface), bufferSerial(), and bufferLoRa(interface).
  
#define ESPNOWG_ACT    sendSerial();
#define SERIAL_ACT     
#define MQTT_ACT          
#define LORAG_ACT      sendSerial();

#define USE_LORA      
//#define USE_WIFI    //Used only for MQTT gateway

//#define CREDENTIALS

//ESP32 Only -- Define UART pins and interface.
#define RXD2 14
#define TXD2 15
#define UART_IF Serial1
#define DEBUG

//Wifi Configuration -- Needed only if this device is using MQTT
#define WIFI_NET "Your SSID"
#define WIFI_PASS "Password"
#define MQTT_ADDR "192.168.0.8"

////LoRa Configuration -- Needed only if using LoRa 
#define SCK 5
#define MISO 19
#define MOSI 27
#define SS 18
#define RST 14
#define DIO0 26
//433E6 for Asia
//866E6 for Europe
//915E6 for North America
#define BAND 915E6

#ifdef CREDENTIALS
#include <credentials.h>
#endif
