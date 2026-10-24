// SPDX-License-Identifier: MIT
// SE2581JS0G1 from Vusion 5.9 GU110. Pervasive GxEPD2 fork required.
// CS DC RST BUSY SCK MOSI constructor.

#include <GxEPD2_3C.h>

static const uint8_t EPD_CS = 5;
static const uint8_t EPD_DC = 17;
static const uint8_t EPD_RST = 16;
static const uint8_t EPD_BUSY = 4;
static const uint8_t EPD_SCK = 13;
static const uint8_t EPD_MOSI = 14;

GxEPD2_3C<GxEPD2_581c_SE2581JS0G1, GxEPD2_581c_SE2581JS0G1::HEIGHT> display(
    GxEPD2_581c_SE2581JS0G1(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY, EPD_SCK, EPD_MOSI));

void setup() {
  display.init(115200);
  display.setRotation(0);  // 256x720
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}

void loop() {}
