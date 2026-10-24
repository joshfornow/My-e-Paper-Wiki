// SPDX-License-Identifier: MIT
// 143302 / UC8276 panel from Hanshow Nebular-420R-N.
// GxEPD2_420c_Z21 — not GxEPD2_420c_GDEY042Z98 (612326 / SSD1683).

#include <GxEPD2_3C.h>

static const uint8_t EPD_CS = 5;
static const uint8_t EPD_DC = 17;
static const uint8_t EPD_RST = 16;
static const uint8_t EPD_BUSY = 4;

GxEPD2_3C<GxEPD2_420c_Z21, GxEPD2_420c_Z21::HEIGHT> display(
    GxEPD2_420c_Z21(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY));

void setup() {
  display.init(115200);
  display.setRotation(0);
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}

void loop() {}
