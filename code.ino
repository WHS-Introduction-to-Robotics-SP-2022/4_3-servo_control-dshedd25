

#include <Servo.h>

Servo myservo;  
int pos = 0;    

void setup() {
  myservo.attach(9);  
}

void loop() {
  myservo.write(43);
  delay(1000);
  myservo.write(100);
  delay(1000);
  myservo.write(16);
  delay(1000);
  
}
