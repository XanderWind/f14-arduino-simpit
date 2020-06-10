#define DCSBIOS_IRQ_SERIAL

#include <SwitchMatrix.h>
#include <DcsBios.h>

const int PLT_REFUEL_PROBE_EXT_ALL_PIN = 11;
const int PLT_REFUEL_PROBE_RET_PIN = 10;
const int PLT_FUEL_QTY_EXT_PIN = 9;
const int PLT_FUEL_QTY_WING_PIN = 8;
const int NOSE_STRUT_KNEEL_PIN = 7;
const int NOSE_STRUT_EXT_PIN = 6;
const int EMERGENCY_STORES_JETTISON_PIN = 2;
const int MASTER_RESET_PIN = 3;
const int GEAR_DOWN_PIN = 5;
const int GEAR_UP_PIN = 4;

DcsBios::Switch3Pos pltRefuelProbe("PLT_REFUEL_PROBE", PLT_REFUEL_PROBE_EXT_ALL_PIN, PLT_REFUEL_PROBE_RET_PIN);
DcsBios::Switch3Pos pltFuelQuantSel("PLT_FUEL_QUANT_SEL", PLT_FUEL_QTY_EXT_PIN, PLT_FUEL_QTY_WING_PIN);
DcsBios::Switch3Pos pltNoseStrutSw("PLT_NOSE_STRUT_SW", NOSE_STRUT_EXT_PIN, NOSE_STRUT_KNEEL_PIN);
DcsBios::Switch2Pos pltEmergStoreJett("PLT_EMERG_STORE_JETT", EMERGENCY_STORES_JETTISON_PIN);
DcsBios::Switch2Pos pltMasterReset("PLT_MASTER_RESET", MASTER_RESET_PIN);
DcsBios::RotaryEncoder pltGearLever("PLT_GEAR_LEVER", "DEC", "INC", GEAR_DOWN_PIN, GEAR_UP_PIN);

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}

