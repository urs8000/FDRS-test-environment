//  FARM DATA RELAY SYSTEM
//
//  GATEWAY 2.000
//
//  Developed by Timm Bogner (timmbogner@gmail.com) in Urbana, Illinois, USA.
//

#include "fdrs_lora-gateway_config.h"             // "fdrs_gateway_config.h"
#include <fdrs_gateway.h>

void setup() {
beginFDRS();
}

void loop() {
loopFDRS();
}

/*

Incoming LoRa. Size: 27 Bytes, RSSI: -40.00dBm, SNR: 10.00dB, PacketCRC: 0x64d2, Total LoRa received: 187, CRC Ok Pct 100.00%
    CRC Match, sending ACK packet to sensor 0xf5fa(hex)
    Transmitting LoRa message of size 11 bytes with CRC 0xf81c to LoRa MAC 0xf5fa
    Sending Serial.
[{"id":1,"type":3,"data":72},{"id":1,"type":1,"data":21.77000046},{"id":1,"type":5,"data":8200}]
    LoRa airtime: 13194089ms

*/