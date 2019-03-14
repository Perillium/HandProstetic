/*Prothese hand 1.0
 * 7-11-2018
 * Slicer * 
 */
#include <Servo.h>

Servo thumb, fingers;

int sensor = 3;
int val = 0;
int value = 0;
  void setup()
  {
    fingers.attach(9);  
    thumb.attach(8);   
    Serial.begin(9600);  
  }
  void loop()
{
  val = analogRead(sensor); 
  Serial.println(val);
  
  value=map(val, 0, 1023, 0, 180);
  thumb.write(value);
  fingers.write(value);
  }
}
