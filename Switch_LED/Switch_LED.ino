void setup() {
  pinMode(10, INPUT);
  digitalWrite(10, HIGH);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if(digitalRead(10) == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }
}
