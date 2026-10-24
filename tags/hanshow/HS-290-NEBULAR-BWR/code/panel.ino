// SPDX-License-Identifier: MIT
// FPC5715 panel from Hanshow Nebular 290 (expected). SSD1680 / GxEPD2_290_C90c.

#include <GxEPD2_3C.h>

static const uint8_t EPD_CS = 5;
static const uint8_t EPD_DC = 17;
static const uint8_t EPD_RST = 16;
static const uint8_t EPD_BUSY = 4;

GxEPD2_3C<GxEPD2_290_C90c, GxEPD2_290_C90c::HEIGHT> display(
    GxEPD2_290_C90c(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY));

void setup() {
  display.init(115200);
  display.setRotation(3);  // native 128x296 -> 296x128
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}

void loop() {}
