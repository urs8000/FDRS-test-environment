//  FARM DATA RELAY SYSTEM
//
//  LoRa Sensor Example
//
//  Developed by Timm Bogner (timmbogner@gmail.com) in Urbana, Illinois, USA.
//  An example of how to send data via LoRa using FDRS.
//

#include "fdrs_lora-node_config.h"
#include <fdrs_node.h>

float data1;
float data2;
float data3;
float data_temp;

void setup() {
  beginFDRS();
}
void loop() {
  data1 = readHum();
  loadFDRS(data1, HUMIDITY_T);
  data2 = readTemp();
  Serial.println(data2);
  Serial.println(String(data2));
  loadFDRS(data2, TEMP_T);
  data3 = readLight();
  loadFDRS(data3, LIGHT_T);
  sendFDRS();
  sleepFDRS(60);            //Sleep time in seconds
}

float readTemp() {
  data_temp = random(1500,3599);              // was 21.0 fix
  Serial.println(data_temp);
  return data2 = data_temp/100;
}

float readHum() {
  return random(10,95);
}

float readLight() {
  return random(700,100000);         // assume LUX   dämmerung ... sommertag
}


/*
debug fromNode-Red
[{"id":1,"type":3,"data":72},{"id":1,"type":1,"data":21.77000046},{"id":1,"type":5,"data":8200}]

Serial output
    Id: 1 - Type: 3 - Data loaded: 72.00
2177.00
21.77
21.77
    Id: 1 - Type: 1 - Data loaded: 21.77
    Id: 1 - Type: 5 - Data loaded: 8200.00
    Sending FDRS Packet!
    Transmitting LoRa message of size 27 bytes with CRC 0x64d2 to gateway 0xee00. Retries remaining: 2, Ack Ok 100.00%
    Incoming LoRa. Size: 11 Bytes, RSSI: -43.00dBm, SNR: 8.75dB, PacketCRC: 0xf81c, Total LoRa received: 1, CRC Ok Pct 100.00%
    ACK Received - CRC Match
     Delaying.

*/