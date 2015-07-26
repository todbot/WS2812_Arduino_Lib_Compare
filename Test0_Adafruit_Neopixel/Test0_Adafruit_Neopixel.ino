// Arduino Uno : 2564 bytes ROM, 38 bytes global RAM
// ATtiny85    : 2300 bytes ROM, 38 bytes global RAM


#include <Adafruit_NeoPixel.h>

#define NUM_LEDS  1
#define DATA_PIN  3

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_LEDS, DATA_PIN); 

void setup()
{
    pixels.begin();
}

void loop()
{
    pixels.setPixelColor( 0, pixels.Color(255,0,0) );
    pixels.show();
    delay(500);

    pixels.setPixelColor( 0, pixels.Color(0,0,0) );
    pixels.show();
    delay(500);
}
