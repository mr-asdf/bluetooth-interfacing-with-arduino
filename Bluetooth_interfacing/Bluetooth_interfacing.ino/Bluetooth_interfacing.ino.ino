/*
* Bluetooh Basic: LED ON OFF
* Coder - mrasdf
* Download the App : https://github.com/mr-asdf/bluetooth-interfacing-with-arduino/raw/master/LED%20APP%20APK/LED%20Controller.apk 
* This program lets you to control a LED on pin 9 of arduino using a bluetooth module.
*/


char data = 0;            //Variable for storing received data
void setup()
{
    Serial.begin(9600);   //Sets the baud for serial data transmission                               
    pinMode(9, OUTPUT);  //Sets digital pin 9 as output pin
}
void loop()
{
   if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == '1')              // Checks whether value of data is equal to 1
         digitalWrite(9, HIGH);   //If value is 1 then LED turns ON
      else if(data == '0')         //  Checks whether value of data is equal to 0
         digitalWrite(9, LOW);    //If value is 0 then LED turns OFF
   }
}
