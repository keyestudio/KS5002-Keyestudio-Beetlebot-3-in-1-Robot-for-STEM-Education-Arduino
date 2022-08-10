//*************************************************************************************
/*
Project 08.2:Light Following Car
*/ 

//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//photoresistors
#define light_L_Pin  34   //define the pins of the left photoresistor as gpio34
#define light_R_Pin  35   //define the pins of the right photoresistor as gpio35
int left_light; 
int right_light;

//servo
int channel_PWM = 3; // servo channels
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;
// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.
int resolution_PWM = 10;
// 
const int servopin = 4;//define the IO port of the servo as gpio4.

void setup(){
  Serial.begin(115200); //set baud rate to 115200.
  pinMode(light_L_Pin, INPUT); //set pins of the left sensor to INPUT
  pinMode(light_R_Pin, INPUT); //set pins of the right sensor to INPUT
  
  pinMode(left_ctrl,OUTPUT);//set control pins of the left motor to OUTPUT
  ledcSetup(0, 1200, 8);//Set the frequency of LEDC channel 1 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256. 
  ledcAttachPin(26, 0);  //Connect the LEDC channel 1 to the gpio26 of the left motor
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcSetup(1, 1200, 8);//Set the frequency of LEDC channel 2 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256.
  ledcAttachPin(25, 1);  //LEDC channel 2 is connected to 1 the pin gpio25 of the right motor.
  
  ledcSetup(3, 50, 10); // Set servo channels3 frequency to 50 and PWM resolution to 10
  ledcAttachPin(4, 3);  //Connect the LEDC channel  to the IO port you set
  ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, and the initial angle of the servo is set to 90°.
  delay(300);
}

void loop(){
  left_light = analogRead(light_L_Pin);//Read the value of the left photoresistor
  right_light = analogRead(light_R_Pin);//Read the value of the right photoresistor
  Serial.print("left_light_value = ");
  Serial.println(left_light);
  Serial.print("right_light_value = ");
  Serial.println(right_light);
  if (left_light > 3000 && right_light > 3000) //detect ranges of left and right photoresistors
  {  
    Car_front(); //go forward
  } 
  else if (left_light > 3000 && right_light <= 3000)  //detect ranges of left and right photoresistors
  {
    Car_left(); //turn left
  } 
  else if (left_light <= 3000 && right_light > 3000) //detect ranges of left and right photoresistors
  {
    Car_right(); //turn right
  } 
  else  //
  {
    Car_Stop(); //stop
  }
}

void Car_front()
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void Car_left()
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 200); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void Car_right()
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 200); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void Car_Stop()
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(0, 0); //Connect the LEDC channel 1 to the left motor and outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(1, 0); //Connect the LEDC channel 2 to the right motor and outputs PWM 0
}
//*************************************************************************************
