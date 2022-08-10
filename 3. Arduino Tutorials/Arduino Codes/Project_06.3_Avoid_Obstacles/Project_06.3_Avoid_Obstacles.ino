//*************************************************************************************
/*
Project 06.3: avoid obstacles
*/  
#include "HT16K33_Lib_For_ESP32.h"  //define 8*8 dot matrix display

//8*8 dot matrix display
//define pins as GPIO21 and GPIO22
#define SDA 21
#define SCL 22
ESP32_HT16K33 matrix = ESP32_HT16K33();
//Array, used to store pattern data, which can be calculated by yourself or obtained from the touch tool
byte front[8]={0x12,0x24,0x48,0x90,0x90,0x48,0x24,0x12};
byte back[8]={0x48,0x24,0x12,0x09,0x09,0x12,0x24,0x48};
byte left[8]={0x18,0x24,0x42,0x99,0x24,0x42,0x81,0x00};
byte right[8]={0x00,0x81,0x42,0x24,0x99,0x42,0x24,0x18};
byte stop1[8]={0x00,0x00,0x00,0xfd,0xfd,0x00,0x00,0x00};
byte result[8][8];

//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//ultrasonic sensor
#define TRIG_PIN 5 // Define the signal input of the ultrasonic sensor as gpio5.
#define ECHO_PIN 18 // Define the signal output of the ultrasonic sensor as gpio18.
long distance,a1,a2;//define three distance variables

//servo
int channel_PWM = 3; // servo channels
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;
// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.
int resolution_PWM = 10;
// 
const int servopin = 4;//set the IO pin of the servo to gpio4.

void setup() {
  Serial.begin(9600);
  pinMode(left_ctrl,OUTPUT);//set control pins of the left motor to OUTPUT
  ledcSetup(0, 1200, 8);//Set the frequency of LEDC channel 0 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256
  ledcAttachPin(26, 0);  //Connect the LEDC channel 0 to the pin gpio26 of the left motor 
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcSetup(1, 1200, 8);//Set the frequency of LEDC channel 0 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256
  ledcAttachPin(25, 1);  //Connect the LEDC channel 1 to the pin gpio25 of the right motor .
  
  pinMode(TRIG_PIN,OUTPUT);//set TRIG_PIN to OUTPUT.
  pinMode(ECHO_PIN,INPUT);//set ECHO_PIN to INPUT.
  
  ledcSetup(3, 50, 10); // Set servo channels3 frequency to 50 and PWM resolution to 10
  ledcAttachPin(4, 3);  //Connect the LEDC channel to the IO port   
ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, and the initial angle of the servo is set to 90° .
  delay(300);
  
  matrix.init(0x70, SDA, SCL);//Initialize dot matrix display
  matrix.clear(); //clear up screens
}
 
void loop()
 {
  avoid();//obstacle avoidance
}

float checkdistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  float distance = pulseIn(ECHO_PIN, HIGH) / 58.00;
  delay(10);
  return distance;
}

void avoid()
{
  distance = checkdistance(); //Get the value of ultrasonic distance
  Serial.println(distance);
  if((distance < 10)&&(distance != 0))//if 0<distance<10
  {
    car_Stop();//stop
    matrix.clear();
    matrix.showLedMatrix(stop1,0,0);
    matrix.show();//show stop pattern
    delay(200);
    ledcWrite(channel_PWM, 128);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, at this time the servo turns to 180°. 
    delay(300);
    a1=checkdistance();//Measuring distance
    delay(200);
    ledcWrite(channel_PWM, 25);  //The 20ms high level is about 0.5ms, that is, 0.5/20*1024, at this time the servo turns to 0°.     delay(300);
    a2=checkdistance();//Measuring distance
    delay(200);
    if(a1 > a2)//
    {
      car_left();//turn left
      matrix.clear();
      matrix.showLedMatrix(left,0,0);
      matrix.show();//show left turning patter
      ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, and the initial angle of the servo is set to 90° .
      delay(300);
      matrix.clear();
      matrix.showLedMatrix(front,0,0);
      matrix.show();//show forward pattern
    }
    else//if left distance <right distance
    {
      car_right();//turn right
      matrix.clear();
      matrix.showLedMatrix(right,0,0);/
      matrix.show();//show right turning
      ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, and the initial angle of the servo is set to 90° .
      delay(300);
      matrix.clear();
      matrix.showLedMatrix(front,0,0);/
      matrix.show();//show forward pattern
    }
  }
  else//
  {
    car_front();//go forward
    matrix.clear();
    matrix.showLedMatrix(front,0,0);//
    matrix.show();//show forward pattern
  }
}

void car_front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 0 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 1 to the right motor and outputs PWM 200
}
void car_back()//define the state of going back
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 50); //Connect the LEDC channel 0 to the left motor and outputs PWM 50.
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 50); //Connect the LEDC channel 1 to the right motor and outputs PWM 50.
}
void car_left()//define the state of turning left
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 200); //Connect the LEDC channel 0 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 1 to the right motor and outputs PWM 200
}
void car_right()//define the state of turning right
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 0 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 200); //Connect the LEDC channel 1 to the right motor and outputs PWM 200
}
void car_Stop()//define the state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(0, 0); //Connect the LEDC channel 0 to the left motor and outputs PWM 0  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(1, 0); //Connect the LEDC channel 1 to the right motor and outputs PWM0
}                                                                
//*************************************************************************************
