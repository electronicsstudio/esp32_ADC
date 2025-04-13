/*
Electronics Studio
@file esp32_ADC.ino
@Date 09-04-25
@url https:https: https://github.com/electronicsstudio  
@url YouTube: https://www.youtube.com/@ElectronicsStudio-v7o/featured
*/

//Potentiometer is connected to GPIO 34 (Analog ADC1_CH6) 
//voltage levels between 0 V and 3.3V
//The voltage measured is then assigned to a value between 0 and 4095, in which 0 V corresponds to 0, and 3.3 V corresponds to 4095

const int potPin = 34;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(50);
}       











































