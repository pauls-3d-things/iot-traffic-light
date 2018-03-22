#include "FastLED.h" // Sketch -> Include Libraries -> Manage Libraries -> Search for "FastLED" and install.

#define NUM_LEDS 5
#define DATA_PIN D5

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

uint8_t l = 0;
uint8_t c = 0;

void loop() {

  uint8_t r = 255 * (c % 3 == 0);
  uint8_t g = 255 * (c % 3 == 1);
  uint8_t b = 255 * (c % 3 == 2);

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(r * (l % NUM_LEDS == i), g * (l % NUM_LEDS == i), b * (l % NUM_LEDS == i));
  }

  if (l % NUM_LEDS == NUM_LEDS - 1) {
    c++;
  }
  l++;

  FastLED.show();
  delay(250);
}
