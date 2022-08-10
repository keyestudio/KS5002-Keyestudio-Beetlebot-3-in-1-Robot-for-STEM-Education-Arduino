//*************************************************************************************
/*
Project 09.2:Infrared remote control car
*/ 
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#include <HT16K33_Lib_For_ESP32.h>

//IR reception
const uint16_t RECV_PIN = 19;  //IR reception pins
IRrecv irrecv(RECV_PIN); //initialize pins of IR receiver
unsigned long irr_val;
decode_results results; //

//dot matrix display
//define pins of the dot matrix display as GPIO21 and GPIO22
#define SDA 21
#define SCL 22
ESP32_HT16K33 matrix = ESP32_HT16K33();
//Array, used to store pattern data, which can be calculated by yourself or obtained from the touch tool
byte front[8]={0x12,0x24,0x48,0x90,0x90,0x48,0x24,0x12};
byte back[8]={0x48,0x24,0x12,0x09,0x09,0x12,0x24,0x48};
byte left[8]={0x18,0x24,0x42,0x99,0x24,0x42,0x81,0x00};
byte right[8]={0x00,0x81,0x42,0x24,0x99,0x42,0x24,0x18};
byte stop1[8]={0x00,0x00,0x00,0xfd,0xfd,0x00,0x00,0x00};

//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//servo
int channel_PWM = 3; // servo channels
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;
// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.
int resolution_PWM = 10;
//
const int servopin = 4;//define the IO pin of the servo as gpio4.

void setup() {
  Serial.begin(115200);//open the serial port and set baud rate to 115200
  pinMode(left_ctrl,OUTPUT);//set control pins of the left motor to OUTPUT
  ledcSetup(0, 1200, 8);//Set the frequency of LEDC channel 1 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256. 
  ledcAttachPin(26, 0);  //Connect the LEDC channel 1 to the gpio26 of the left motor
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcSetup(1, 1200, 8);//Set the LEDC channel to 2, the frequency to 1200, and the PWM resolution to 8, that is, the duty cycle is 256. 
  ledcAttachPin(25, 1);  //LEDC channel 2 is connected to 1 the pin gpio25 of the right motor.
  
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  irrecv.enableIRIn(); //start receiving signals
  Serial.print("Enabling IRin");
  Serial.println(RECV_PIN);   //print the infrared receiving pin
  
  ledcSetup(3, 50, 10); // set the frequency of servo channels3 to 50,PWM resolution to 10.
  ledcAttachPin(4, 3);  //Connect the LEDC channel  to the IO port you set
  ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, and the initial angle of the servo is set to 90° .
  delay(300);
  matrix.init(0x70, SDA, SCL);//initialize the dot matrix display
  matrix.clear(); //clear up screens
}

void loop() {
  if (irrecv.decode(&results)) {
    // print() & println() can't handle printing long longs. (uint64_t)
    irr_val = results.value;
    serialPrintUint64(irr_val, HEX);
    Serial.println("");
    switch(irr_val)
    {
      case 0xFF629D : 
        car_front(); 
        matrix.clear();
        matrix.showLedMatrix(front,0,0);
        matrix.show();//go forward 
        break;
      case 0xFFA857 : 
        car_back(); 
        matrix.clear();
        matrix.showLedMatrix(back,0,0);
        matrix.show();//go back
        break;
      case 0xFF22DD : 
        car_left(); 
        matrix.clear();
        matrix.showLedMatrix(left,0,0);
        matrix.show();//turn left
        break; 
      case 0xFFC23D : 
        car_right();
        matrix.clear();
        matrix.showLedMatrix(right,0,0);
        matrix.show();//turn right
        break;
      case 0xFF02FD : 
        car_Stop();
        matrix.clear();
        matrix.showLedMatrix(stop1,0,0);
        matrix.show();//stop
        break;
    }
    irrecv.resume();  // Receive the next value
  }
  delay(100);
}


void car_front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void car_back()//define the state of going back
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 50); //Connect the LEDC channel 1 to the left motor and outputs PWM 50
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 50); //Connect the LEDC channel 2 to the right motor and outputs PWM 50
}
void car_left()//define the state of turning left
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 200); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void car_right()//define the state of turning right
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 200); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void car_Stop()//define the state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(0, 0); //Connect the LEDC channel 1 to the left motor and outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(1, 0); //Connect the LEDC channel 2 to the right motor and outputs PWM 0
}
//*************************************************************************************
