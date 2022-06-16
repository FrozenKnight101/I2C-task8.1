#include <Wire.h> 

int LED = 2; 

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
    char i = Wire.read(); 
    digitalWrite(LED, i); 
  }
  
}
void loop() 
{
  delay(100); 
}
