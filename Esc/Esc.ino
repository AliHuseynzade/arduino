#include "ESC.h"
ESC myESC (8);//balaca motor   
ESC myESC1 (9);  
                
void setup() {
  myESC.arm();
  myESC1.arm(); 
  myESC.speed(1500);
  myESC1.speed(1500);
  delay(5000);                                         
}

void loop() {
     myESC.speed(1350);//balaca motor
    myESC1.speed(1350);
    delay(1000);
  
}
