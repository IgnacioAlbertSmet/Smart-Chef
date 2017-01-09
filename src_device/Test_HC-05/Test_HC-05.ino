#include <SoftwareSerial.h>
SoftwareSerial BTserial(3, 4); // RX | TX
// Connect the HC-05 TX to Arduino pin 2 RX. 
// Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.
 
char c = ' ';
 
void setup() 
{
    Serial.begin(9600);
    Serial.println("Bluetooth connection started!");
 
    // HC-06 default serial speed for communcation mode is 9600
    BTserial.begin(9600);  
}
 
void loop() 
{
    BTserial.println("Bluetooth Test"); 
    Serial.println("Serial Test"); 
    delay(1000); 
}
