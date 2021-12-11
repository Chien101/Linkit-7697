void setup() {
  pinMode(10, INPUT);               //pin10-> set Input
  digitalWrite(10, HIGH);           //pinMode(10, INPUT_PULLUP);上拉電阻
  pinMode(LED_BUILTIN, OUTPUT);     //pin7->  set Output 
}

void loop() {
  if(digitalRead(10) == HIGH){      //if pin10 has voltage
    digitalWrite(LED_BUILTIN, HIGH);//light it up
  }
  else{
    digitalWrite(LED_BUILTIN, LOW); //turn off
  }
}
