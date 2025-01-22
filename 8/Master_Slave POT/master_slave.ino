#include <Wire.h>

int masterPotValue = 0;   
int slavePWMValue = 0;    

void setup() {
  Wire.begin();
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  
  masterPotValue = analogRead(A1);
  int masterPWM = map(masterPotValue, 0, 1023, 0, 255);

  
  Wire.beginTransmission(100);
  Wire.write(masterPWM);     
  
  Wire.endTransmission();     

  
  Wire.requestFrom(100, 1);     
  if (Wire.available()) {
    slavePWMValue = Wire.read();  
  }

  
  analogWrite(5, slavePWMValue);

  
  Serial.print("Master PWM: ");
  Serial.print(masterPWM);
  Serial.print(" | Slave PWM: ");
  Serial.println(slavePWMValue);

  delay(100);  
}
