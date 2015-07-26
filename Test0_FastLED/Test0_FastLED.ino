// On Arduino 1.6.5
// Arduino Uno : 3516 bytes ROM,  72 bytes global RAM
// ATtiny85    : 4198 bytes ROM,  72 bytes global RAM

// from: https://github.com/FastLED/FastLED/tree/FastLED3.1
#include <FastLED.h>

#define NUM_LEDS  1
#define DATA_PIN  3

CRGB leds[NUM_LEDS];

void setup()
{ 
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop()
{ 
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(500);
    
    leds[0] = CRGB::Black;
    FastLED.show();
    delay(500);
}
