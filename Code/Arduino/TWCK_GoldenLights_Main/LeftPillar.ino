void LeftPillar_LeftSide_RainUp(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 0; i < 49; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void LeftPillar_Middle_RainUp(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 49; i < 71; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void LeftPillar_RightSide_RainDown(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 71; i < 134; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void LeftPillar_OnAll(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 0; i < 134; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
  }
  FastLED.show();
}

void LeftPillar_RightSide_RainUp(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 134; i >= 71; i--) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void LeftPillar_Middle_RainDown(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 70; i >= 49; i--) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void LeftPillar_LeftSide_RainDown(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 48; i >= 0; i--) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}


void LeftPillar_OnAll_Odd(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 0; i < 134; i++) {
    if (i % 2 == 0) {
      setLedColor(i, CRGB(0, 0, 0));
    } else {
      setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    }
  }
  FastLED.show();
}

void LeftPillar_OnAll_Even(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 0; i < 134; i++) {
    if (i % 2 == 0) {
      setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    } else {
      setLedColor(i, CRGB(0, 0, 0));
    }
  }
  FastLED.show();
}

