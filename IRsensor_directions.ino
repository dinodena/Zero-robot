/*  TITLE: IR sensor directions
 *  By: Dena Attar from Project Group 8
 *  DATE: 03/21/2022
*/


//define pins and variables

int LSP = 12;
int RSP = 7;

int IN1 = 9;
int IN2 = 3;
int IN3 = 10;
int IN4 = 11;
int ENA = 5;
int ENB = 8;

 void setup() {
  //SENSORS
  pinMode(LSP,INPUT);
  pinMode(RSP,INPUT);
  //MOTORS
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT); 
}

 void loop() {
  //read sensor data and store 0 means WHITE/ON
  int LSD = digitalRead(LSP);
  int RSD = digitalRead(RSP);
  if (LSD == 0 && RSD == 0)
  {
    //move FORWARD
  digitalWrite(IN1,LOW);//LOW
  digitalWrite(IN2,HIGH);//HIGH
  analogWrite(ENA,255);
  digitalWrite(IN3,HIGH);//HIGH
  digitalWrite(IN4,LOW);//LOW
  analogWrite(ENB,255);
  }


  else if (LSD == 1 && RSD == 0)
  {
    //LEFT turn
  digitalWrite(IN1,HIGH);//HIGH
  digitalWrite(IN2,LOW);//LOW
  analogWrite(ENA,255);
  digitalWrite(IN3,HIGH);//HIGH
  digitalWrite(IN4,LOW);//LOW
  analogWrite(ENB,255);
  }

  //if black is detected by right, right motor stops
  else if (LSD == 0 && RSD == 1)
  {
    //RIGHT turn
  digitalWrite(IN1,LOW);//LOW
  digitalWrite(IN2,HIGH);//HIGH
  analogWrite(ENA,255);
  digitalWrite(IN3,LOW);//LOW
  digitalWrite(IN4,HIGH);//HIGH
  analogWrite(ENB,255);
  }

  //if both detect black, both stop
  else if (LSD == 1 && RSD == 1)
  {
    //STOP
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

  
  } 
  
 }
