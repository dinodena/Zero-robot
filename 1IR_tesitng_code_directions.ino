/*TITLE: testing 1 Left sensor
 * Dena Attar
 * Date: 04/04/2022
 */

//define pin MOTOR
int LSP = 12; // #define lefts 

int IN1 = 9;
int IN2 = 3;
int IN3 = 10;
int IN4 = 11;
int ENA = 5;
int ENB = 8;

void setup() {
 //SENSOR
  pinMode(LSP,INPUT);
  //MOTOR
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
    
}
void loop() {
  //read IR left data and store 1 means WHITE
  int LSD = digitalRead(LSP);
  if(LSD == 0)
{
  //move forward motor
  digitalWrite(IN1,LOW);//LOW
  digitalWrite(IN2,HIGH);
  digitalWrite(ENA,255);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);//LOW
  digitalWrite(ENB,255);
  
}
    else if (LSD ==1)//reads BLACK
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(ENA,255);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    digitalWrite(ENB,255);
    
/*/reacting to ir sensor but black tape reverse

if (digitalRead(lefts)==1){digitalWrite(motor1,HIGH);}
if (digitalRead(lefts)==0){digitalWrite(motor1,LOW);}
*/

}
