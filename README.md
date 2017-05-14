# LiquidCrystal_I2C with digital pins #
This library uses digital pins instead of sda, scl (a4, a5) with [SoftI2CMaster](https://github.com/todbot/SoftI2CMaster) library. It's called a '[bit banging](https://en.wikipedia.org/wiki/Bit_banging)'.
You have to import SoftI2CMaster library first in order to use this library.

# Installation #
Create a new folder called "LiquidCrystal_I2C" under the folder named "libraries" in your Arduino sketchbook folder.
Create the folder "libraries" in case it does not exist yet. Place all the files in the "LiquidCrystal_I2C" folder.

# Usage #
To use the library in your own sketch, select it from *Sketch > Import Library*.
And Constructor arguments changed a bit.
- **LiquidCrystal_I2C lcd(0x27, 16, 2); (X)**
- **LiquidCrystal_I2C lcd(7, 8, 0x27, 16, 2); (O)**
	- first argument is digital pin out for sda.
	- second one is for scl.
-------------------------------------------------------------------------------------------------------------------
This library is based on work done by DFROBOT (www.dfrobot.com).
