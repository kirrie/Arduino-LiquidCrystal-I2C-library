#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// first 2 parameters are digital pins for sda, scl.
LiquidCrystal_I2C lcd(7, 8, 0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("Hello, world!");
}

void loop()
{
	// Do nothing here...
}
