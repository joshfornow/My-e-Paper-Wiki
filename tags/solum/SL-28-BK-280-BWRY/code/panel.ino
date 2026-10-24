// SPDX-License-Identifier: MIT
// HINK-E0276A01 panel from Solum 2.8 BK (EL028R8B4C).
// Custom class (SSD2680ZA). Not in upstream GxEPD2.
//

#include <GxEPD2_4C.h>

static const uint8_t EPD_CS = 5;
static const uint8_t EPD_DC = 17;
static const uint8_t EPD_RST = 16;
static const uint8_t EPD_BUSY = 4;

GxEPD2_4C<GxEPD2_276c_E0276A01, GxEPD2_276c_E0276A01::HEIGHT> display(
    GxEPD2_276c_E0276A01(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY));

void setup() {
  display.init(115200);
  display.setRotation(1);  // native 128x296 -> 296x128
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}

void loop() {}
