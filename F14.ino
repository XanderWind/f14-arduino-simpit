#define DCSBIOS_IRQ_SERIAL

#include <SwitchMatrix.h>
#include <DcsBios.h>

const int MASTER_RESET_PIN = 2;
const int GEAR_DOWN_PIN = 7;
const int GEAR_UP_PIN = 5;

DcsBios::Switch2Pos pltMasterReset("PLT_MASTER_RESET", MASTER_RESET_PIN);
DcsBios::RotaryEncoder pltGearLever("PLT_GEAR_LEVER", "DEC", "INC", GEAR_DOWN_PIN, GEAR_UP_PIN);

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}

