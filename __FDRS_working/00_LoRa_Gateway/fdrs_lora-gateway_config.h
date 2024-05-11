//  FARM DATA RELAY SYSTEM
//
//  GATEWAY CONFIGURATION

//Addresses
#define UNIT_MAC           0x00  // The address of this gateway

// #define ESPNOW_NEIGHBOR_1  0x00  // Address of ESP-NOW neighbor #1
// #define ESPNOW_NEIGHBOR_2  0x00  // Address of ESP-NOW neighbor #2
#define LORA_NEIGHBOR_1    0x10  // Address of LoRa neighbor #1
#define LORA_NEIGHBOR_2    0x11  // Address of LoRa neighbor #2

// Interfaces
//#define USE_ESPNOW  
#define USE_LORA
//#define USE_WIFI  // Will cause errors if used with ESP-NOW. Use a serial link instead!
//#define USE_ETHERNET

// Routing
// Options: sendESPNowNbr(1 or 2); sendESPNowPeers(); sendLoRaNbr(1 or 2); broadcastLoRa(); sendSerial(); sendMQTT();
#define ESPNOWG_ACT    
#define LORAG_ACT      sendSerial();
#define SERIAL_ACT     sendMQTT();
#define MQTT_ACT       sendSerial();   
#define INTERNAL_ACT   sendMQTT();
#define ESPNOW1_ACT   
#define ESPNOW2_ACT                    
#define LORA1_ACT      
#define LORA2_ACT 

// LoRa Configuration
#define RADIOLIB_MODULE SX1276
#define LORA_SS    18
#define LORA_RST   14
#define LORA_DIO   26
#define LORA_BUSY  33
//#define USE_SX126X

#define LORA_TXPWR 17   // LoRa TX power in dBm (: +2dBm - +17dBm (for SX1276-7) +20dBm (for SX1278))

//#define CUSTOM_SPI
#define LORA_SPI_SCK  5
#define LORA_SPI_MISO 19
#define LORA_SPI_MOSI 27

#define FDRS_DEBUG     // Enable USB-Serial debugging
#define DBG_LEVEL 2    // 0 for minimal messaging, 1 for troubleshooting, 2 for development

// OLED -- Displays console debugging messages on an SSD1306 I²C OLED
///#define USE_OLED    
#define OLED_HEADER "FDRS"
#define OLED_PAGE_SECS 30
#define OLED_SDA 4
#define OLED_SCL 15
#define OLED_RST 16

// UART data interface pins (ESP32 only)
#define RXD2 12    // 3. pos v. oben (links) BLAU                             // ursmii was 14
#define TXD2 13    // 2. pos v. oben (links) ROT                              // ursmii was 15

//#define USE_LR  // Use ESP-NOW LR mode (ESP32 only)

// WiFi and MQTT Credentials  -- These will override the global settings
//#define WIFI_SSID   "Your SSID"  
//#define WIFI_PASS   "Your Password"

// Use Static IP Address for WiFi connections
// #define USE_STATIC_IPADDRESS     
// #define HOST_IPADDRESS      "192.168.0.100"
// #define GW_IPADDRESS        "192.168.0.1"
// #define SUBNET_ADDRESS      "255.255.255.0"
// #define DNS1_IPADDRESS      "192.168.0.1"    
// #define DNS2_IPADDRESS      "192.168.0.2"    

//#define MQTT_ADDR   "192.168.0.8"
//#define MQTT_PORT   1883 // Default MQTT port is 1883
//#define MQTT_AUTH   //Enable MQTT authentication 
//#define MQTT_USER   "Your MQTT Username"
//#define MQTT_PASS   "Your MQTT Password"



