#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);


void setup() {
lcd.init();
lcd.backlight();
lcd.setCursor(1, 0);
lcd.print("Standing By");

  // initialize serial connection
Serial.begin(9600);
}


// void loop() 
// {
//   lcd.clear();

//   for (int x =0; x<20; x++){
//   char receivedChar = Serial.read();
//     lcd.setCursor(x,0);
//     lcd.print(receivedChar);
//     delay(1000);
// }

// }



// void setup() {
//     Serial.begin(9600);
// }

void loop() {
    if (Serial.available() > 0) {
        String receivedChar = Serial.readStringUntil('\n');
        lcd.clear();
        lcd.setCursor(1, 0);
        lcd.print(receivedChar);

        delay(1000);
        String response = "HELLO FROM ARDUINO  \n";

        Serial.print(response);
    }
}

