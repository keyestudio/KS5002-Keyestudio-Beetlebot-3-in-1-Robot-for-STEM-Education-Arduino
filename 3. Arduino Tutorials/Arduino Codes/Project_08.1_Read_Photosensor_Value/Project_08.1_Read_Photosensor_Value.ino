//*************************************************************************************
/*
Project 08.1:Read Photosensor Value
*/
#define PHOTOSENSITIVE_PIN 34 //Define the pins that ESP32 reads photosensitive
int photosensitiveADC;        //Defines a variable to store ADC values

void setup()
{
  pinMode(PHOTOSENSITIVE_PIN, INPUT);//Configure the pins for input mode
  Serial.begin(115200);          //Initialize the serial port and set the baud rate to 115200
}

void loop()
{
  photosensitiveADC = analogRead(PHOTOSENSITIVE_PIN);//Read the photosensitive resistance value
  Serial.print("photosensitiveADC: ");
  Serial.println(photosensitiveADC);         //Print photosensitive resistance value
  delay(500);
}
//*************************************************************************************
