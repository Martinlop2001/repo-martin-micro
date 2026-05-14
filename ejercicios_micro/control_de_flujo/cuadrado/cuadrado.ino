void setup() {

  Serial.begin(9600);
  delay(4000);
  Serial.println("CUADRADO 10x10\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      Serial.print("*");
    }
    Serial.println();
  }
}

void loop() {

}
