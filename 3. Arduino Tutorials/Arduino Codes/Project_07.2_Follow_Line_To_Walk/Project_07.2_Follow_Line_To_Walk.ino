//*************************************************************************************
/*
Project 07.2: Follow line to walk
*/

//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26
#define right_ctrl  32 //define direction control pins of the right motor as gpio32
#define right_pwm  25  //define the PWM control pin of the right motor as gpio25

//IR line tracking 
#define tracking_left  17  //set the pin of the left line tracking sensor to gpio17
#define tracking_right  16  //set the pin of the right line tracking sensor to gpio16
int L_val,R_val;//Define two variables

//servo
int channel_PWM = 3; // servo channels
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;
// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.
int resolution_PWM = 10;
//
const int servopin = 4;//set the IO port of the servo to gpio4.

void setup() {
  pinMode(left_ctrl,OUTPUT);//set control pins of the left motor to OUTPUT
  ledcSetup(0, 1200, 8);//Set the frequency of LEDC channel 1 to 20 and the PWM resolution to 8, that is, the duty cycle is 256.   ledcAttachPin(26, 0);  //Connect the LEDC channel 1 to the gpio26 of the left motor
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcSetup(1, 1200, 8);//Set the LEDC channel to 2, the frequency to 20, and the PWM resolution to 8, that is, the duty cycle is 256.
  ledcAttachPin(25, 1);  //LEDC channel 2 is connected to 1 the pin gpio25 of the right motor.
  
  pinMode(tracking_left, INPUT); //Set right pins of the left sensor to input
  pinMode(tracking_right, INPUT); //Set right pins of the right sensor to input
 
  ledcSetup(3, 50, 10); // set servo channels3 frequency to 50,PWM resolution to 10.
  ledcAttachPin(4, 3);  //Connect the LEDC channel  to the IO port you set
  ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, at this time the servo rotates 90°.
  delay(300);
}

void loop() 
{
  tracking(); //run main programs
}

void tracking()
{
  L_val = digitalRead(tracking_left);//read the value of the left line tracking sensor
  R_val = digitalRead(tracking_right);//read the value of the right line tracking sensor
  if((L_val == 1)&&(R_val == 1))//if both of sensors detect black lines
  {
    front();//go forward
  }
  else if((L_val == 1)&&(R_val == 0))//if only the left sensor detects black lines
  {
    left();//turn left
  }
  else if((L_val == 0)&&(R_val == 1))//if only the right sensor detects black lines
  {
    right();//turn right
  }
  else//if none of sensors detects black lines
  {
    Stop();//stop
   }
}

void front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 130); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 130); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void left()//define the state of turning left
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 135); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 80); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void right()//define the state of turning right
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 80); //Connect the LEDC channel 1 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 135); //Connect the LEDC channel 2 to the right motor and outputs PWM 200
}
void Stop()//define the state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(0, 0); //Connect the LEDC channel 1 to the left motor and outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(1, 0); //Connect the LEDC channel 2 to the right motor and outputs PWM 0
}
//*************************************************************************************
