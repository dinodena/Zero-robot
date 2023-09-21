/**************
  Title: IR (infrared) Sensor Code
  Created by  Dena Attar
  Date: 3/1/2022
*/
//define IR sensor pin number
#define IR_out 12

//LED pin number
#define on_board_LED 13

void setup() {
  // define sensor pins
  pinMode(IR_out, INPUT); //sensor output readout

  //define LED pin
  pinMode(on_board_LED, OUTPUT);
  digitalWrite(on_board_LED, LOW); //make sure the LED is off

}

void loop() {
  //LED reacts to IR sensor
 if (digitalRead(IR_out)==1){digitalWrite(on_board_LED, HIGH);}
 if (digitalRead(IR_out)==0){digitalWrite(on_board_LED, LOW);}
}