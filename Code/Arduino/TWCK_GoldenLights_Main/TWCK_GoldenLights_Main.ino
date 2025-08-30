#include <FastLED.h>

#define NUM_LEDS 270
#define DATA_PIN 2

CRGB leds[NUM_LEDS];
uint8_t pos = 0;

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.clear(true);
  FastLED.setBrightness(250);  // safer for power
}

void loop() {


  // LeftPillar_LeftSide_RainUp(255, 150, 0);
  // LeftPillar_Middle_RainUp(255, 150, 0);
  // LeftPillar_RightSide_RainDown(255, 150, 0);

  // OffAll();
  // LeftPillar_RightSide_RainUp(255, 150, 0);
  // LeftPillar_Middle_RainDown(255, 150, 0);
  // LeftPillar_LeftSide_RainDown(255, 150, 0);
  // OffAll();


  // //blink all
  // for (int a = 0; a < 9; a++) {
  //   LeftPillar_OnAll(255, 150, 0);
  //   delay(100);
  //   OffAll();
  //   delay(100);
  // }

  // LeftPillar_OnAll(255, 150, 0);
  // delay(10000);
  // OffAll();
  // delay(1000);


  // LeftPillar_LeftSide_RainUp(255, 255, 175);
  // LeftPillar_Middle_RainUp(255, 255, 175);
  // LeftPillar_RightSide_RainDown(255, 255, 175);

  // OffAll();
  // LeftPillar_RightSide_RainUp(255, 255, 175);
  // LeftPillar_Middle_RainDown(255, 255, 175);
  // LeftPillar_LeftSide_RainDown(255, 255, 175);
  // OffAll();


  // //blink all
  // for (int a = 0; a < 9; a++) {
  //   LeftPillar_OnAll(255, 255, 175);
  //   delay(100);
  //   OffAll();
  //   delay(100);
  // }

  // LeftPillar_OnAll(255, 255, 175);
  // delay(10000);
  // OffAll();
  // delay(1000);





  // =======================
  // LeftPillar_OnAll_Even(255,150,0);
  // delay(300);
  // LeftPillar_OnAll_Odd(255,150,0);
  // delay(0);

  //RAIN LEFT TO RIGHT
  RainLeftPillar(255, 150, 0);
  OffAll();
  delay(500);

  //RAIN RIGHT TO LEFT
  RainRightPillar(255, 150, 0);

  delay(500);
  OffAll();
  delay(500);

  for (int a = 0; a < 10; a++) {
    LeftPillar_OnAll(255, 150, 0);
    delay(100);
    OffAll();
    RightPillar_OnAll(255, 150, 0);
    delay(100);
    OffAll();
  }

  LeftPillar_OnAll(255, 150, 0);
  RightPillar_OnAll(255, 150, 0);
  delay(5000);

  for (int b = 0; b < 30; b++) {
    LeftPillar_OnAll_Even(255, 150, 0);
    RightPillar_OnAll_Even(255, 150, 0);
    delay(100);
    LeftPillar_OnAll_Odd(255, 150, 0);
    RightPillar_OnAll_Odd(255, 150, 0);
    delay(100);
  }
  LeftPillar_OnAll(255, 150, 0);
  RightPillar_OnAll(255, 150, 0);
  delay(5000);
  OffAll();
}

void RainLeftPillar(uint8_t ColorRed, uint8_t ColorGreen, uint8_t ColorBlue) {
  //RAIN LEFT TO RIGHT
  LeftPillar_LeftSide_RainUp(ColorRed, ColorGreen, ColorBlue);
  LeftPillar_Middle_RainUp(ColorRed, ColorGreen, ColorBlue);
  LeftPillar_RightSide_RainDown(ColorRed, ColorGreen, ColorBlue);
  RightPillar_LeftSide_RainUp(ColorRed, ColorGreen, ColorBlue);
  RightPillar_Middle_RainDown(ColorRed, ColorGreen, ColorBlue);
  RightPillar_RightSide_RainDown(ColorRed, ColorGreen, ColorBlue);
}

void RainRightPillar(uint8_t ColorRed, uint8_t ColorGreen, uint8_t ColorBlue) {
  RightPillar_RightSide_RainUp(ColorRed, ColorGreen, ColorBlue);
  RightPillar_Middle_RainUp(ColorRed, ColorGreen, ColorBlue);
  RightPillar_LeftSide_RainDown(ColorRed, ColorGreen, ColorBlue);
  LeftPillar_RightSide_RainUp(ColorRed, ColorGreen, ColorBlue);
  LeftPillar_Middle_RainDown(ColorRed, ColorGreen, ColorBlue);
  LeftPillar_LeftSide_RainDown(ColorRed, ColorGreen, ColorBlue);
}


void OffAll() {
  for (int i = 0; i <= NUM_LEDS; i++) {
    setLedColor(i, CRGB(0, 0, 0));
  }
  FastLED.show();
}


void setLedColor(int ledNumber, CRGB color) {
  if (ledNumber < 0 || ledNumber >= NUM_LEDS) return;  // avoid out-of-bounds
  leds[ledNumber] = color;
}