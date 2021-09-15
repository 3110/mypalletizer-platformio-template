#include "MyPalletizerBasic.h"
#include "ParameterList.h"

MyPalletizerBasic mp;

void setup(void) {
    mp.setup();
    mp.powerOn();
    mp.setLEDRGB(0x00, 0xf0, 0x00);
}

void loop(void) {
    M5.update();
}