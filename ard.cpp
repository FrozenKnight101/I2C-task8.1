#include <Wire.h> 

int LED = 11; 

void setup() 
{
 
  Wire.begin(0x8); 
  Wire.onReceive(event); 
  pinMode(LED, OUTPUT); 
  digitalWrite(LED, LOW); 

}

void event(int total)
{
  while(Wire.available())
  { 
    char c = Wire.read(); 
    digitalWrite(LED, c); 
  }
  
}
void loop() 
{
  delay(100); 
}
