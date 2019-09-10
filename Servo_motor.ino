#include <Servo.h>
  #define SERVO 6 
  Servo servo;
  int posicao;

void setup() {
  servo.attach(SERVO);
  Serial.begin(9600);
  servo.write(0);
}

void loop() {
  for (int i=0; i <360;i++){
  servo.write(i);
  delay(50);
  }
  for (int i = 0; i<360; i--) {
  servo.write(i);
  delay(50);
  }
}
