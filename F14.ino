#define DCSBIOS_IRQ_SERIAL

#include <SwitchMatrix.h>
#include <DcsBios.h>

const int NOSE_STRUT_KNEEL_PIN = 7;
const int NOSE_STRUT_EXT_PIN = 6;
const int EMERGENCY_STORES_JETTISON = 2;
const int MASTER_RESET_PIN = 3;
const int GEAR_DOWN_PIN = 5;
const int GEAR_UP_PIN = 4;

DcsBios::Switch3Pos pltNoseStrutSw("PLT_NOSE_STRUT_SW", NOSE_STRUT_EXT_PIN, NOSE_STRUT_KNEEL_PIN);
DcsBios::Switch2Pos pltEmergStoreJett("PLT_EMERG_STORE_JETT", EMERGENCY_STORES_JETTISON);
DcsBios::Switch2Pos pltMasterReset("PLT_MASTER_RESET", MASTER_RESET_PIN);
DcsBios::RotaryEncoder pltGearLever("PLT_GEAR_LEVER", "DEC", "INC", GEAR_DOWN_PIN, GEAR_UP_PIN);

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}

