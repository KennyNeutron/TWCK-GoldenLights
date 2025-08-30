void RightPillar_LeftSide_RainUp(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 134; i < 197; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void RightPillar_Middle_RainDown(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 197; i < 219; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void RightPillar_RightSide_RainDown(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 219; i < 270; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void RightPillar_LeftSide_RainDown(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 196; i >= 134; i--) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void RightPillar_Middle_RainUp(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 218; i >= 197; i--) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void RightPillar_RightSide_RainUp(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 270; i >= 219; i--) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
    delay(10);
    FastLED.show();
  }
}

void RightPillar_OnAll(uint8_t ColorR, uint8_t ColorG, uint8_t ColorB) {
  for (int i = 134; i < 270; i++) {
    setLedColor(i, CRGB(ColorR, ColorG, ColorB));
  }
  FastLED.show();
}