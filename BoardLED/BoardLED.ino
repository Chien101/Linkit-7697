void setup() {
  pinMode(12,OUTPUT);    //pin12 set output
}

void loop() {
  digitalWrite(12,HIGH); //turn on pin12
  delay(1000);           //wait 1 sec.
  digitalWrite(12,LOW);  //turn off
  delay(1000);           //wait 1 sec.

}
