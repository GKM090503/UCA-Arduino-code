void setup() {
 Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(A0);

  Serial.println(lightValue);

  if (lightValue < 300) {
    analogWrite(6, 100);
  }
  else {
    analogWrite(6, 0);
  }
  

  delay(500);
}
