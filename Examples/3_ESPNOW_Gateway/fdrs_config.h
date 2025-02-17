//  FARM DATA RELAY SYSTEM
//
//  GATEWAY 2.000 Configuration

#define UNIT_MAC     0x03  // The address of this gateway
#define ESPNOW1_PEER  0xFD  // ESPNOW1 Address 
#define ESPNOW2_PEER  0xFE  // ESPNOW2 Address
#define LORA1_PEER    0xFD  // LoRa1 Address
#define LORA2_PEER    0xFE  // LoRa2 Address

//Actions -- Define what happens when a packet arrives at each interface:
//Current function options are: sendESPNOW(MAC), sendSerial(), sendMQTT(), bufferESPNOW(interface), bufferSerial(), and bufferLoRa(interface).
  
#define ESPNOWG_ACT   sendESPNOW(0x04); 
#define SERIAL_ACT     
#define MQTT_ACT          
#define LORAG_ACT   
#define ESPNOW1_ACT    
#define ESPNOW2_ACT                    
#define LORA1_ACT 
#define LORA2_ACT    

//#define USE_LORA      
//#define USE_WIFI    //Used only for MQTT gateway


#if defined (ESP32)
#define RXD2 14
#define TXD2 15
#define UART_IF Serial2
#else 
#define UART_IF Serial
#endif

////LoRa Configuration -- Needed only if using LoRa 
#define SCK 5
#define MISO 19
#define MOSI 27
#define SS 18
#define RST 14
#define DIO0 26

// Buffer Delays - in milliseconds
#define ESPNOW1_DELAY  0
#define ESPNOW2_DELAY  0
#define ESPNOWG_DELAY  0
#define SERIAL_DELAY   0
#define MQTT_DELAY     0
#define LORAG_DELAY    1000
#define LORA1_DELAY    1000
#define LORA2_DELAY    1000
