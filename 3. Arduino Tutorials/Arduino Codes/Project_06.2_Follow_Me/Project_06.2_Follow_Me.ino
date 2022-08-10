//*************************************************************************************
/*
Project 06.2: follow me
Car follows the object
*/ 
//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//ultrasonic sensor
#define TRIG_PIN 5 // set signals input of the ultrasonic sensor to gpio5.
#define ECHO_PIN 18 //set signals output of the ultrasonic sensor to gpio18.
long distance; //define distance variables

//servo
int channel_PWM = 3; // servo channels
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;
// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.
int resolution_PWM = 10;
// 
const int servopin = 4;//set the pin of the servo to gpio4.

void setup() {
  Serial.begin(115200); //set baud rate to 115200.
  pinMode(left_ctrl,OUTPUT);//set control pins of the left motor to OUTPUT
  ledcSetup(0, 1200, 8);//Set the frequency of LEDC channel 0 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256
  ledcAttachPin(26, 0);  //connect the LEDC channel 0to the pin gpio26 of the left motor
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcSetup(1, 1200, 8);//Set the frequency of LEDC channel 1 to 1200 and the PWM resolution to 8, that is, the duty cycle is 256.
  ledcAttachPin(25, 1);  //connect the LEDC channel 1 to the pin gpio25 of the right motor
  
  pinMode(TRIG_PIN,OUTPUT);//set TRIG_PIN to OUTPUT.
  pinMode(ECHO_PIN,INPUT);//set ECHO_PIN to INPUT.
  
  ledcSetup(3, 50, 10); // Set the frequency of servo channels3 to 50 and the PWM resolution to 10.
  ledcAttachPin(4, 3);  //connect LEDC channels to IO ports you set
  ledcWrite(channel_PWM, 77);  //The 20ms high level is about 1.5ms, which is 1.5/20*1024, and the initial angle of the servo is set to 90° .
  delay(300);
}

void loop() {
  distance = checkdistance();//Get the distance measured by the ultrasonic sensor
  Serial.print(distance);//Send a pulse, calculate the distance in centimeters and print the result.
  Serial.println("cm");
  if(distance<8)//if distance is less than 8
  {
    back();//back
  }
  else if((distance>=8)&&(distance<13))//if 8≤distance<13
  {
    Stop();//stop
  }
  else if((distance>=13)&&(distance<35))//if 13≤distance<35.
  {
    front();//follow
  }
  else//
  {
    Stop();//stop
  }
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
   
void front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(0, 200); //Connect the LEDC channel 0 to the left motor and outputs PWM 200
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(1, 200); //Connect the LEDC channel 1 to the right motor and outputs PWM 200
}
void back()//define the state of going back
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(0, 100); //Connect the LEDC channel 0 to the left motor and outputs PWM 100.
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(1, 100); //Connect the LEDC channel 1 to the right motor and outputs PWM 100
}
void Stop()//define state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(0, 0); //Connect the LEDC channel 0 to the left motor and outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(1, 0); //connect the LEDC channel 1 to the right motor and outputs PWM 0
}
//*************************************************************************************
