//*************************************************************************************
/*
 Project 05 Motor drive and speed regulation
 Motor moves forward, backward, left and right
*/ 
#define left_ctrl  33  //define the direction control pin(rgpio33) of the left motor
#define left_pwm  26   //define the speed control pin(D6) of the left motor
#define right_ctrl  32 //Define the direction control pin of the  right motor as gpio32
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

void setup()
{
  pinMode(left_ctrl,OUTPUT);//set control pins of the left motor to OUTPUT
  ledcSetup(0, 1200, 8);//Set LEDC channel 1 frequency to 1200, PWM resolution to 8 that duty cycle is 256.
  ledcAttachPin(26, 0);  //LEDC channel 1 is connected to 1 the pin gpio26 of the left motor
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcSetup(1, 1200, 8);//Set the LEDC channel to 2, the frequency to 1200, and the PWM resolution to 8, that is, the duty cycle is 256.
  ledcAttachPin(25, 1);  //LEDC channel 2 is connected to 1 the pin gpio25 of the right motor.
}

void loop()
{ 
  //front
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 255); //LEDC channel 1 is connected to the left motor and outputs PWM 255
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 255); //LEDC channel 2 is connected to the right motor and outputs PWM 255
  delay(2000);//delay in 2s
  
  //back
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 50); //LEDC channel 1 is connected to the left motor and outputs PWM 50
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 50); //LEDC channel 2 is connected to the right motor and outputs PWM 50
  delay(2000);//delay in 2s
  
  //left
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 55); //LEDC channel 1 is connected to the left motor and outputs PWM 55.
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //LEDC channel 2 is connected to the right motor and outputs PWM 200.
  delay(2000);//delay in 2s
  
  //right
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //LEDC channel 1 is connected to the left motor and outputs PWM 200.
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 55); //LEDC channel 2 is connected to the right motor and outputs PWM 55
  delay(2000);//delay in 2s
  
  //stop
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(0, 0); //LEDC channel 1 is connected to the left motor and outputs PWM 0.
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(1, 0); //LEDC channel 2 is connected to the right motor and outputs PWM 0
  delay(2000);//delay in 2s
}
//*************************************************************************************
