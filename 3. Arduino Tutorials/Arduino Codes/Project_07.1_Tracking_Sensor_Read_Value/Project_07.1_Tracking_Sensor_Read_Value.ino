//*************************************************************************************
/*
Project 07.1: Tracking sensor read value
*/ 
#define tracking_left  17  //define the pin of the left sensor as gpio17
#define tracking_right  16  //define the pin of the right sensor as gpio16
int L_val,R_val; //define two variables of two sensors

void setup() {
 Serial.begin(115200); //set baud rate to 115200
 pinMode(tracking_left, INPUT); //set pins of the left sensor to INPUT
 pinMode(tracking_right, INPUT); //set pins of the right sensor to INPUT
}

void loop() {
 L_val = digitalRead(tracking_left); //read the value of the left sensor
 R_val = digitalRead(tracking_right); //read the value of the right sensor
 Serial.print("L_val: "); //serial print L_val
 Serial.print(L_val); //serial prints L_val
 Serial.print("    "); //serial prints space key
 Serial.print("R_val: "); //serial prints R_val
 Serial.println(R_val); //serial prints the R_val
 delay(300); //delay in 0.3s
}
//*************************************************************************************
