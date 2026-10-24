// SPDX-License-Identifier: MIT
// SE2266JS0C5 from Vusion 2.6 GU110. Pervasive GxEPD2 fork required.

#include <GxEPD2_3C.h>

static const uint8_t EPD_CS = 5;
static const uint8_t EPD_DC = 17;
static const uint8_t EPD_RST = 16;
static const uint8_t EPD_BUSY = 4;

GxEPD2_3C<GxEPD2_266c_SE2266JS0C5, GxEPD2_266c_SE2266JS0C5::HEIGHT> display(
    GxEPD2_266c_SE2266JS0C5(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY));

void setup() {
  display.init(115200);
  display.setRotation(3);  // native 152x296 -> 296x152
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}

void loop() {}
