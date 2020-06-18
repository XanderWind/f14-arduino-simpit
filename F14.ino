#define DCSBIOS_IRQ_SERIAL

#include <SwitchMatrix.h>
#include <DcsBios.h>


const int PLT_HUD_MODE_LAND = 39;
const int PLT_HUD_MODE_A2G = 38;
const int PLT_HUD_MODE_A2A = 37;
const int PLT_HUD_MODE_CRUISE = 36;
const int PLT_HUD_MODE_TAKEOFF = 35; 
const int PLT_HOOK_LEVER = 34;
const int PLT_THOTTLE_MODE_AUTO = 33;
const int PLT_THOTTLE_MODE_MAN = 32;
const int PLT_ENGINE_AIRSTART_ON = 31;
const int PLT_ENGINE_CRANK_R = 30;
const int PLT_ENGINE_CRANK_L = 29;
const int PLT_INLET_RAMPS_R = 28;
const int PLT_INLET_RAMPS_L = 27;
const int PLT_ENGINE_MODE_L = 26; 
const int PLT_ENGINE_MODE_R = 25;
const int PLT_ASY_THRUST_LIMIT = 24;
const int PLT_AUTOPLT_ENGAGE = 23;
const int PLT_AUTOPLT_GT = 22;
const int PLT_AUTOPLT_HDG = 21;
const int PLT_AUTOPLT_ALT = 20;
const int PLT_AUTOPLT_ACL = 19; 
const int PLT_AUTOPLT_VECPCD = 18;
const int PLT_AFCS_YAW = 17;
const int PLT_AFCS_ROLL = 16;
const int PLT_AFCS_PTICH = 15;
const int PLT_FUEL_DUMP_PIN = 14;
const int PLT_ANTI_SKID_BOTH_PIN = 13;
const int PLT_ANTI_SKID_SPOILER_BK_PIN  = 12;
const int PLT_REFUEL_PROBE_EXT_ALL_PIN = 11;
const int PLT_REFUEL_PROBE_RET_PIN = 10;
const int PLT_FUEL_QTY_EXT_PIN = 9;
const int PLT_FUEL_QTY_WING_PIN = 8;
const int NOSE_STRUT_KNEEL_PIN = 7;
const int NOSE_STRUT_EXT_PIN = 6;
const int GEAR_DOWN_PIN = 5;
const int GEAR_UP_PIN = 4;
const int MASTER_RESET_PIN = 3;
const int EMERGENCY_STORES_JETTISON_PIN = 2;

DcsBios::Switch2Pos pltHudModeLand("PLT_HUD_MODE_LAND", PLT_HUD_MODE_LAND);
DcsBios::Switch2Pos pltHudModeA2g("PLT_HUD_MODE_A2G", PLT_HUD_MODE_A2G);
DcsBios::Switch2Pos pltHudModeA2a("PLT_HUD_MODE_A2A", PLT_HUD_MODE_A2A);
DcsBios::Switch2Pos pltHudModeCruise("PLT_HUD_MODE_CRUISE", PLT_HUD_MODE_CRUISE);
DcsBios::Switch2Pos pltHudModeTakeoff("PLT_HUD_MODE_TAKEOFF", PLT_HUD_MODE_TAKEOFF);
DcsBios::Switch2Pos pltHookLever("PLT_HOOK_LEVER", PLT_HOOK_LEVER);
DcsBios::Switch3Pos pltThrottleMode("PLT_THROTTLE_MODE", PLT_THOTTLE_MODE_MAN, PLT_THOTTLE_MODE_AUTO);
DcsBios::Switch2Pos pltEngineAirstart("PLT_ENGINE_AIRSTART", PLT_ENGINE_AIRSTART_ON);
DcsBios::Switch3Pos pltEngineCrank("PLT_ENGINE_CRANK", PLT_ENGINE_CRANK_R, PLT_ENGINE_CRANK_L);
DcsBios::Switch2Pos pltInletRampsR("PLT_INLET_RAMPS_R", PLT_INLET_RAMPS_R);
DcsBios::Switch2Pos pltInletRampsL("PLT_INLET_RAMPS_L", PLT_INLET_RAMPS_L);
DcsBios::Switch2Pos pltEngineModeL("PLT_ENGINE_MODE_L", PLT_ENGINE_MODE_L);
DcsBios::Switch2Pos pltEngineModeR("PLT_ENGINE_MODE_R", PLT_ENGINE_MODE_R);
DcsBios::Switch2Pos pltAsyThrustLimit("PLT_ASY_THRUST_LIMIT", PLT_ASY_THRUST_LIMIT);
DcsBios::Switch2Pos pltAutopltEngage("PLT_AUTOPLT_ENGAGE", PLT_AUTOPLT_ENGAGE);
DcsBios::Switch3Pos pltAutopltHdg("PLT_AUTOPLT_HDG", PLT_AUTOPLT_HDG, PLT_AUTOPLT_GT);
DcsBios::Switch2Pos pltAutopltAlt("PLT_AUTOPLT_ALT", PLT_AUTOPLT_ALT);
DcsBios::Switch3Pos pltAutopltVectorCarrier("PLT_AUTOPLT_VECTOR_CARRIER", PLT_AUTOPLT_VECPCD, PLT_AUTOPLT_ACL);
DcsBios::Switch2Pos pltAfcsYaw("PLT_AFCS_YAW", PLT_AFCS_YAW);
DcsBios::Switch2Pos pltAfcsRoll("PLT_AFCS_ROLL", PLT_AFCS_ROLL);
DcsBios::Switch2Pos pltAfcsPitch("PLT_AFCS_PITCH", PLT_AFCS_PTICH);
DcsBios::Switch2Pos pltFuelDump("PLT_FUEL_DUMP", PLT_FUEL_DUMP_PIN);
DcsBios::Switch3Pos pltAntiSkidSw("PLT_ANTI_SKID_SW", PLT_ANTI_SKID_BOTH_PIN, PLT_ANTI_SKID_SPOILER_BK_PIN);
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

