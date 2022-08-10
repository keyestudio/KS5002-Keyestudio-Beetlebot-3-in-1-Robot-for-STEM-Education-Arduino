//*************************************************************************************
/*
Project 04.1 Servo Rotation
the plastic arm of the servo will rotate at an angle of 0°,45°,90°,135°,and180°,repeatly.
*/
#include <Arduino.h>

// Servo channel 
int channel_PWM = 3;  
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;   
// PWM resolution, the value is between 0-20, here is 10, then the pwm value filled in the following ledcWrite is between 0-2 to the 10th power, that is, 0-1024.
int resolution_PWM = 10;   
//
const int PWM_Pin = 4;  

void setup() {
  Serial.begin(115200); //Set the baud rate to 115200.
  ledcSetup(channel_PWM, freq_PWM, resolution_PWM); // Set servo channel, servo frequency, PWM resolution.
  ledcAttachPin(PWM_Pin, channel_PWM); 
}

void get_pwm_info()
{
  Serial.println("*******************************************************************");
  Serial.print("Reads the value of the specified channel duty cycle：");
  Serial.println(ledcRead(channel_PWM));  //Read the value of the specified channel duty cycle
  Serial.print("Reads the value of the specified channel frequency as：");
  Serial.println(ledcReadFreq(channel_PWM));  //Returns the current frequency of the specified channel (if the current duty cycle is 0, the method returns 0).
}

void loop() {
  ledcWrite(channel_PWM, 25);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 90°.
  get_pwm_info();  
  delay(1000);
  ledcWrite(channel_PWM, 52);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 45°. .
  get_pwm_info();  //Print information, click the serial port viewer in the upper right corner of the IDE to see the printed content
  delay(1000);
  ledcWrite(channel_PWM, 77);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 90°.
  get_pwm_info();
  delay(1000);
  ledcWrite(channel_PWM, 102);  /The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 135°. .
  get_pwm_info();
  delay(1000);
  ledcWrite(channel_PWM, 128);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 180°. .
  get_pwm_info();
  delay(1000);
  //ledcDetachPin(PWM_Pin);  //
}
}
//*************************************************************************************
