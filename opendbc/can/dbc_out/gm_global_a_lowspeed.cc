#include "common_dbc.h"

namespace {

const Signal sigs_270581760[] = {
    {
      .name = "RightBlinker",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 6,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LeftBlinker",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 7,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "BlinkerLight",
      .start_bit = 25,
      .msb  = 25,
      .lsb = 25,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_270598144[] = {
    {
      .name = "VehicleSpeed1",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 8,
      .size = 16,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VehicleSpeed2",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 40,
      .size = 16,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_270794752[] = {
    {
      .name = "SteeringWheelAngle",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 40,
      .size = 16,
      .is_signed = true,
      .factor = 0.0625,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_270860288[] = {
    {
      .name = "BrakeLevel",
      .start_bit = 2,
      .msb  = 2,
      .lsb = 1,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "BrakeSensor",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 8,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_271360000[] = {
    {
      .name = "MaxRegen",
      .start_bit = 12,
      .msb  = 12,
      .lsb = 12,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "GasPedal",
      .start_bit = 47,
      .msb  = 47,
      .lsb = 40,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "GearShifter2NotUsed",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 48,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruiseControlActive",
      .start_bit = 56,
      .msb  = 56,
      .lsb = 56,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_271368192[] = {
    {
      .name = "GearShifter",
      .start_bit = 17,
      .msb  = 17,
      .lsb = 16,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_272629760[] = {
    {
      .name = "ChimeType",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ChimeDuration",
      .start_bit = 15,
      .msb  = 15,
      .lsb = 8,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ChimeRepeat",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 16,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ChimeByte4",
      .start_bit = 31,
      .msb  = 31,
      .lsb = 24,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ChimeByte5",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 32,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_274923520[] = {
    {
      .name = "DriverDoorOpened",
      .start_bit = 0,
      .msb  = 0,
      .lsb = 0,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_275480576[] = {
    {
      .name = "WheelSpeedFL",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 8,
      .size = 16,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WheelSpeedRL",
      .start_bit = 23,
      .msb  = 23,
      .lsb = 24,
      .size = 16,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WheelSpeedFR",
      .start_bit = 39,
      .msb  = 39,
      .lsb = 40,
      .size = 16,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WheelSpeedRR",
      .start_bit = 55,
      .msb  = 55,
      .lsb = 56,
      .size = 16,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_276127744[] = {
    {
      .name = "LKAGapButton",
      .start_bit = 1,
      .msb  = 1,
      .lsb = 0,
      .size = 2,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_276135936[] = {
    {
      .name = "CruiseButtons",
      .start_bit = 3,
      .msb  = 3,
      .lsb = 1,
      .size = 3,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "BlinkerStatus",
    .address = 0x1020C000,
    .size = 5,
    .num_sigs = ARRAYSIZE(sigs_270581760),
    .sigs = sigs_270581760,
  },
  {
    .name = "VehicleSpeed",
    .address = 0x10210000,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_270598144),
    .sigs = sigs_270598144,
  },
  {
    .name = "SteeringWheelAngle",
    .address = 0x10240000,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_270794752),
    .sigs = sigs_270794752,
  },
  {
    .name = "BrakePedal",
    .address = 0x10250000,
    .size = 2,
    .num_sigs = ARRAYSIZE(sigs_270860288),
    .sigs = sigs_270860288,
  },
  {
    .name = "GasPedalRegenCruise",
    .address = 0x102CA000,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_271360000),
    .sigs = sigs_271360000,
  },
  {
    .name = "GearShifter",
    .address = 0x102CC000,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_271368192),
    .sigs = sigs_271368192,
  },
  {
    .name = "Chime",
    .address = 0x10400000,
    .size = 5,
    .num_sigs = ARRAYSIZE(sigs_272629760),
    .sigs = sigs_272629760,
  },
  {
    .name = "DriverDoorStatus",
    .address = 0x10630000,
    .size = 1,
    .num_sigs = ARRAYSIZE(sigs_274923520),
    .sigs = sigs_274923520,
  },
  {
    .name = "WheelSpeed",
    .address = 0x106B8000,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_275480576),
    .sigs = sigs_275480576,
  },
  {
    .name = "CruiseButtons2",
    .address = 0x10756000,
    .size = 1,
    .num_sigs = ARRAYSIZE(sigs_276127744),
    .sigs = sigs_276127744,
  },
  {
    .name = "CruiseButtons",
    .address = 0x10758000,
    .size = 3,
    .num_sigs = ARRAYSIZE(sigs_276135936),
    .sigs = sigs_276135936,
  },
};

const Val vals[] = {
    {
      .name = "BlinkerLight",
      .address = 0x1020C000,
      .def_val = "1 ACTIVE 0 INACTIVE",
      .sigs = sigs_270581760,
    },
    {
      .name = "LeftBlinker",
      .address = 0x1020C000,
      .def_val = "1 ACTIVE 0 INACTIVE",
      .sigs = sigs_270581760,
    },
    {
      .name = "RightBlinker",
      .address = 0x1020C000,
      .def_val = "1 ACTIVE 0 INACTIVE",
      .sigs = sigs_270581760,
    },
    {
      .name = "CruiseControlActive",
      .address = 0x102CA000,
      .def_val = "1 ACTIVE 0 INACTIVE",
      .sigs = sigs_271360000,
    },
    {
      .name = "GearShifter",
      .address = 0x102CC000,
      .def_val = "3 PARK 0 DRIVE/LOW",
      .sigs = sigs_271368192,
    },
    {
      .name = "DriverDoorOpened",
      .address = 0x10630000,
      .def_val = "1 OPENED 0 CLOSED",
      .sigs = sigs_274923520,
    },
    {
      .name = "LKAGapButton",
      .address = 0x10756000,
      .def_val = "2 \?\?\? 1 \?\? 0 NONE",
      .sigs = sigs_276127744,
    },
    {
      .name = "CruiseButtons",
      .address = 0x10758000,
      .def_val = "6 CANCEL 5 MAIN 3 SET 2 RESUME 1 NONE",
      .sigs = sigs_276135936,
    },
};

}

const DBC gm_global_a_lowspeed = {
  .name = "gm_global_a_lowspeed",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(gm_global_a_lowspeed)