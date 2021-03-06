#define NUM_PATTERNS 56

struct Pattern {
  unsigned int mode;
  String name;
};

Pattern gPatterns[NUM_PATTERNS] = {
  { FX_MODE_STATIC, "MOST" },
  { FX_MODE_BLINK, "BLCL" },
  { FX_MODE_BREATH, "MOBR" },
  { FX_MODE_COLOR_WIPE, "CLWI" },
  { FX_MODE_COLOR_WIPE_INV, "MOIW" },
  { FX_MODE_COLOR_WIPE_REV, "MORW" },
  { FX_MODE_COLOR_WIPE_REV_INV, "IRWP" },
  { FX_MODE_COLOR_WIPE_RANDOM, "RAWP" },
  { FX_MODE_RANDOM_COLOR, "RACL" },
  { FX_MODE_SINGLE_DYNAMIC, "MOSD" },
  { FX_MODE_MULTI_DYNAMIC, "MOMD" },
  { FX_MODE_RAINBOW, "MORB" },
  { FX_MODE_RAINBOW_CYCLE, "RBCY" },
  { FX_MODE_SCAN, "MOMS" },
  { FX_MODE_DUAL_SCAN, "MODS" },
  { FX_MODE_FADE, "MOFD" },
  { FX_MODE_THEATER_CHASE, "MOTC" },
  { FX_MODE_THEATER_CHASE_RAINBOW, "TCRB" },
  { FX_MODE_RUNNING_LIGHTS, "MORL" },
  { FX_MODE_TWINKLE, "MOTK" },
  { FX_MODE_TWINKLE_RANDOM, "TKRD" },
  { FX_MODE_TWINKLE_FADE, "TKFD" },
  { FX_MODE_TWINKLE_FADE_RANDOM, "TFDR" },
  { FX_MODE_SPARKLE, "MOSP" },
  { FX_MODE_FLASH_SPARKLE, "FLSP" },
  { FX_MODE_HYPER_SPARKLE, "HYSP" },
  { FX_MODE_STROBE, "MOST" },
  { FX_MODE_STROBE_RAINBOW, "STRB" },
  { FX_MODE_MULTI_STROBE, "STMU" },
  { FX_MODE_BLINK_RAINBOW, "BLRB" },
  { FX_MODE_CHASE_WHITE, "CHWT" },
  { FX_MODE_CHASE_COLOR, "CHCL" },
  { FX_MODE_CHASE_RANDOM, "CHRD" },
  { FX_MODE_CHASE_RAINBOW, "CHRB" },
  { FX_MODE_CHASE_FLASH, "CHFL" },
  { FX_MODE_CHASE_FLASH_RANDOM, "CHFR" },
  { FX_MODE_CHASE_RAINBOW_WHITE, "CHRW" },
  { FX_MODE_CHASE_BLACKOUT, "CHBL" },
  { FX_MODE_CHASE_BLACKOUT_RAINBOW, "CHBR" },
  { FX_MODE_COLOR_SWEEP_RANDOM, "CLSR" },
  { FX_MODE_RUNNING_COLOR, "MORC" },
  { FX_MODE_RUNNING_RED_BLUE, "RNRB" },
  { FX_MODE_RUNNING_RANDOM, "RNRD" },
  { FX_MODE_LARSON_SCANNER, "LRSC" },
  { FX_MODE_COMET, "MOCT" },
  { FX_MODE_FIREWORKS, "MOFW" },
  { FX_MODE_FIREWORKS_RANDOM, "FWRD" },
  { FX_MODE_MERRY_CHRISTMAS, "CHRS" },
  { FX_MODE_FIRE_FLICKER, "MOFF" },
  { FX_MODE_FIRE_FLICKER_SOFT, "FFST" },
  { FX_MODE_FIRE_FLICKER_INTENSE, "FFIN" },
  { FX_MODE_CIRCUS_COMBUSTUS, "MOCC" },
  { FX_MODE_HALLOWEEN, "MOHW" },
  { FX_MODE_BICOLOR_CHASE, "BICH" },
  { FX_MODE_TRICOLOR_CHASE, "TRCH" },
  { FX_MODE_ICU, "MOIC" }
};

uint8_t modeForPattern(String name) {
  for(int index = 0; index < NUM_PATTERNS; index++) {
    const Pattern& pattern = gPatterns[index];
    if (pattern.name == name) {
      return pattern.mode;
    }
  }

  return FX_MODE_STATIC;
}

