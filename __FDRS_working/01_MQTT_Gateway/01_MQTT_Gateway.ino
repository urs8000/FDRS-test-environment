//  FARM DATA RELAY SYSTEM
//
//  GATEWAY 2.000
//
//  Developed by Timm Bogner (timmbogner@gmail.com) in Urbana, Illinois, USA.
//

#include "fdrs_mqtt-gateway_config.h"              // "fdrs_gateway_config.h"
#include <fdrs_gateway.h>

void setup() {
Serial.begin(115200);
beginFDRS();
}

void loop() {
loopFDRS();
}
