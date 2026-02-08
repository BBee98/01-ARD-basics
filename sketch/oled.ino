#include <Wire.h>
#include <I2CScanner.h>

int LCD_OLED_SCL = 4;
int LCD_OLED_SDA = 5;

	// Rango para el scanner sin parámetros
uint8_t Low_Address = 1;
uint8_t High_Address = 127;

I2CScanner scanner;

void setup() {
  Serial.begin(9600);
  scanner.Init();
}

void loop() {
  scanner.Scan();
  delay(2500);
}
