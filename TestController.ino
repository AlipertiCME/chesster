#include <LiquidCrystal_I2C.h>

// initialize stepper pins and actuator 
  #define dirPinx 4 
  #define stepPinx 3
  #define dirPiny 7 
  #define stepPiny 6
  #define servoPin 9

  // define homing pins
  #define xhomePin 2
  #define yhomePin 5
  
//Instantiate Display 
LiquidCrystal_I2C lcd(0x27, 20, 4);

// // Homing checks
// bool xHomed = false;
// bool yhomed = false;

void setup() {

  // Declare pins as Outputs
	pinMode(stepPinx, OUTPUT);
	pinMode(dirPinx, OUTPUT);

  pinMode(stepPiny, OUTPUT);
	pinMode(dirPiny, OUTPUT);

  pinMode(servoPin,OUTPUT);

  pinMode(xhomePin, INPUT_PULLUP);
  pinMode(yhomePin, INPUT_PULLUP);


  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.print("Standing By");

}

void loop(){
lcd.clear();
lcd.setCursor(1, 0);
lcd.print("Homing Started");

home();

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Homing Complete");
delay(2000);

}

// home x stepper 
// void homex(){

//   lcd.clear();
//   lcd.setCursor(1, 0);
//   lcd.print("Homing X");

//   if (!xHomed){
//     while (digitalRead(xhomePin) == LOW) {    
//       digitalWrite(dirPinx, LOW);    
//       digitalWrite(stepPinx, HIGH);
//       delay(10);                       
//       digitalWrite(stepPinx, LOW);
//       delay(10);   
//   }
//   xHomed = true;

//   lcd.clear();
//   lcd.setCursor(1, 0);
//   lcd.print("Homing X - Complete");
//   }
// }
void homex(){

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Homing X");

  while (digitalRead(xhomePin)) {    
    digitalWrite(dirPinx, LOW);    
    digitalWrite(stepPinx, HIGH);
    delay(10);                       
    digitalWrite(stepPinx, LOW);
    delay(10);   
  }
  while (!digitalRead(xhomePin)) { 
    digitalWrite(dirPinx, HIGH); 
    digitalWrite(stepPinx, HIGH);
    delay(10);                      
    digitalWrite(stepPinx, LOW);
    delay(10);
  }
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Homing X - Complete");
}

// home y stepper 
void homey(){

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Homing Y");

  while (digitalRead(yhomePin)) {    
    digitalWrite(dirPiny, LOW);    
    digitalWrite(stepPiny, HIGH);
    delay(10);                       
    digitalWrite(stepPiny, LOW);
    delay(10);   
  }
  while (!digitalRead(yhomePin)) { 
    digitalWrite(dirPiny, HIGH); 
    digitalWrite(stepPiny, HIGH);
    delay(10);                      
    digitalWrite(stepPiny, LOW);
    delay(10);
  }
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Homing Y - Complete");
}

// home all motors 
void home(){
  homex();
  delay(2000);
  homey();
}