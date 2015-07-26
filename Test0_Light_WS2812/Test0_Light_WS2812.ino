// Arduino Uno : 1860 bytes ROM, 34 bytes global RAM
// ATtiny85    : 1674 bytes ROM, 34 bytes global RAM

#include <WS2812.h>

#define NUM_LEDS 1
#define DATA_PIN 3

WS2812 LED( NUM_LEDS );
	
cRGB value;

void setup()
{
	LED.setOutput( DATA_PIN );
}

void loop()
{
    value = {255,0,0};
	LED.set_crgb_at( 0, value);
	LED.sync();
	delay(500);
	
    value = {0,0,0};
	LED.set_crgb_at(0, value);
	LED.sync();
	delay(500);
}

