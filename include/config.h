#ifndef LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
#define LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED

#define TT_SCK     5    // GPIO5  -- SX1278's SCK
#define TT_MISO    19   // GPIO19 -- SX1278's MISnO
#define TT_MOSI    27   // GPIO27 -- SX1278's MOSI

// UPDATE WITH YOUR TTN KEYS AND ADDR.
static PROGMEM u1_t NWKSKEY[16] = { 0x79, 0x62, 0x82, 0x7D, 0x8A, 0x5C, 0xE0, 0x1A, 0x73, 0x2F, 0x07, 0x61, 0xF8, 0x5A, 0x71, 0x5C }; // LoRaWAN NwkSKey, network session key
static u1_t PROGMEM APPSKEY[16] = { 0xC0, 0xA6, 0xB6, 0x77, 0xDC, 0x75, 0xC5, 0xFC, 0x1B, 0x1F, 0x4B, 0x92, 0x94, 0x5B, 0x3F, 0x89 }; // LoRaWAN AppSKey, application session key
static const u4_t DEVADDR = 0x260211A5 ; // LoRaWAN end-device address (DevAddr)

#endif //LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
