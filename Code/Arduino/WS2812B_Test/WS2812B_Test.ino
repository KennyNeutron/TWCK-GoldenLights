#include <FastLED.h>

#define NUM_LEDS 30
#define DATA_PIN 2

CRGB leds[NUM_LEDS];
uint8_t pos = 0;

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.clear(true);
  FastLED.setBrightness(180);  // safer for power
}

void loop() {
  Rain();
  delay(500);
  OffAll();
  delay(500);
}

void Rain() {
  for (int i = 0; i <= 30; i++) {
    setLedColor(i, CRGB(255, 0, 0));
    FastLED.show();
    delay(100);
  }
}

void OffAll() {
  for (int i = 0; i <= 30; i++) {
    setLedColor(i, CRGB(0, 0, 0));
  }
  FastLED.show();
}


void setLedColor(int ledNumber, CRGB color) {
  if (ledNumber < 0 || ledNumber >= NUM_LEDS) return;  // avoid out-of-bounds
  leds[ledNumber] = color;
}