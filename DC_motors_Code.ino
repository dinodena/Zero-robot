/***********
 * Title: Sketch for DC motors
 * Created by: Dena Attar
 * DATE: 02/18/22
 *
 *
*
*
//define pin numbers:
#define ENA 5
#define IN1 9
#define IN2 3

 //must include ENA and ENB pins for pwm 

 void setup() {
  pinMode(ENA,OUTPUT);//make THREE output pins including ENA
  pinMode(IN2,OUTPUT);
  pinMode(IN1,OUTPUT);

  //CLOCKWISE (255) MAX SPEED
  digitalWrite(IN1,HIGH);//turn the motor on MAX
  digitalWrite(IN2,LOW);
  analogWrite(ENA,255);
  delay(2000);
  
  //STOP the MOTOR
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  delay(2000);

  //COUNTER-CLOCKWISE MAX speed
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,255);
  delay(2000);

  //STOP the motor again
  digitalWrite(IN1,LOW); //turns motor off
  digitalWrite(IN2,LOW);
  delay(2000);

  //CLOCKWISE in HALF POWER
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,120);
  delay(2000);

  //STOP motor
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  delay(2000);

  //COUNTER-CLOCKWISE HALF power
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,120);
  delay(2000);
  
  //stop motor
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
 
 }
  
void loop(){
  
}*/
/*This is sketch for making both spin at same time*/
/***********
 * Title: Sketch for DC motors
 * Created by: Dena Attar
 * DATE: 02/18/22
  */
#define ENA 5
#define ENB 8
#define IN1 9
#define IN2 3
#define IN3 10
#define IN4 11 

 void setup() {
  pinMode(ENA,OUTPUT);// motor1
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENB,OUTPUT);//motor2
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);

  //CLOCKWISE FORWARD(255) MAX SPEED
  digitalWrite(IN1,HIGH);//turn motor1 on MAX
  digitalWrite(IN2,LOW);
  analogWrite(ENA, 255);
  digitalWrite(IN3,HIGH);//turn motor2 on MAX
  digitalWrite(IN4,LOW);
  analogWrite(ENB, 255);
  delay(2000);
  
  //STOP the MOTOR
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(2000);

  //COUNTER-CLOCKWISE MAX speed
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA, 255);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB, 255);
  delay(2000);

  //STOP the motor again
  digitalWrite(IN1,LOW); //turns motor 1 off
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);//turn motor 2 off
  digitalWrite(IN4,LOW);
  delay(2000);

  //CLOCKWISE in HALF POWER
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,129);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,129);
  delay(2000);

  //STOP motor
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(2000);

  //COUNTER-CLOCKWISE HALF power
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,129);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB,129);
  delay(2000);
  
  //stop motor
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
 
 }
 void loop(){
  
 }
