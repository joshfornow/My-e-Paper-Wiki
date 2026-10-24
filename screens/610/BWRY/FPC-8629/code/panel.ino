// SPDX-License-Identifier: MIT
// FPC-8629 panel from Solum Newton Pro 6.1" BWRY (EL060H6W4A).
// Custom class. JD79665AA, 8 px window offset.
//

#include <GxEPD2_4C.h>

static const uint8_t EPD_CS = 5;
static const uint8_t EPD_DC = 17;
static const uint8_t EPD_RST = 16;
static const uint8_t EPD_BUSY = 4;

GxEPD2_4C<GxEPD2_611c_FPC8629, GxEPD2_611c_FPC8629::HEIGHT> display(
    GxEPD2_611c_FPC8629(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY));

void setup() {
  display.init(115200);
  display.setRotation(0);  // 648x480
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}

void loop() {}
