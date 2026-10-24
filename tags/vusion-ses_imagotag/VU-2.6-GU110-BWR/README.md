# VU-2.6-GU110-BWR

SES-imagotag / **Vusion** 2.6" class tag (Pervasive panel).

![Front](pictures/VU-2.6-GU110-BWR-black-front-01.png)

## Identity

|         |                                                                             |
| ------- | --------------------------------------------------------------------------- |
| Brand   | SES-imagotag / Vusion                                                       |
| Name    | 2.6 GU110                                                                   |
| Housing | gray                                                                        |
| Panel   | [SE2266JS0C5](../../../screens/266/BWR/SE2266JS0C5/README.md), BWR, 296×152 |

Details in [doc/references.md](doc/references.md).

## Panel

Pervasive **SE2266JS0C5** sticker on the panel back. Native **152×296**, `setRotation(3)` → **296×152**. Driver `GxEPD2_266c_SE2266JS0C5` (vendor Pervasive GxEPD2 fork).

## Reuse

```cpp
#include <GxEPD2_3C.h>

GxEPD2_3C<GxEPD2_266c_SE2266JS0C5, GxEPD2_266c_SE2266JS0C5::HEIGHT> display(
    GxEPD2_266c_SE2266JS0C5(/*CS*/ 5, /*DC*/ 17, /*RST*/ 16, /*BUSY*/ 4));

void setup() {
  display.init(115200);
  display.setRotation(3);
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
  } while (display.nextPage());
}
```

See [code/panel.ino](code/panel.ino).

## References from photos

| Photo                                                                                | Extracted references                                                                                                                                          |
| ------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ![VU-2.6-GU110-BWR-gray-pcb-01.png](pictures/VU-2.6-GU110-BWR-gray-pcb-01.png)       | `222303-07` (PCB silkscreen / revision); `imagotag` (Brand or vendor name); `RFRTx024G` (PCB silkscreen / revision)                                           |
| ![VU-2.6-GU110-BWR-gray-pinout-02.png](pictures/VU-2.6-GU110-BWR-gray-pinout-02.png) | `2325` (Date code / lot); `A1360061-00 01` (Flex / FPC part number)                                                                                           |
| ![VU-2.6-GU110-BWR-gray-screen-01.png](pictures/VU-2.6-GU110-BWR-gray-screen-01.png) | `24116-00626` (Panel module / glass ID); `B00D78211J` (Panel module / glass ID); `SE2266JS0C5` (Panel module / glass ID); `SPP1ZV1` (Panel module / glass ID) |

## Photos

### Front

![VU 2.6 GU110 BWR black front 01](pictures/VU-2.6-GU110-BWR-black-front-01.png)

### Open

![VU 2.6 GU110 BWR black open 01](pictures/VU-2.6-GU110-BWR-black-open-01.png)

![VU 2.6 GU110 BWR gray open 01](pictures/VU-2.6-GU110-BWR-gray-open-01.png)

![VU 2.6 GU110 BWR gray open 02](pictures/VU-2.6-GU110-BWR-gray-open-02.png)

### Battery

![VU 2.6 GU110 BWR black battery 01](pictures/VU-2.6-GU110-BWR-black-battery-01.png)

### PCB

![VU 2.6 GU110 BWR gray pcb 01](pictures/VU-2.6-GU110-BWR-gray-pcb-01.png)

### Pinout

![VU 2.6 GU110 BWR gray pinout 01](pictures/VU-2.6-GU110-BWR-gray-pinout-01.png)

![VU 2.6 GU110 BWR gray pinout 02](pictures/VU-2.6-GU110-BWR-gray-pinout-02.png)

### Screen

![VU 2.6 GU110 BWR gray screen 01](pictures/VU-2.6-GU110-BWR-gray-screen-01.png)

![VU 2.6 GU110 BWR gray screen 02](pictures/VU-2.6-GU110-BWR-gray-screen-02.png)

![VU 2.6 GU110 BWR gray screen 03](pictures/VU-2.6-GU110-BWR-gray-screen-03.png)
