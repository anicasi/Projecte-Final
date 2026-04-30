const int sensorPin = 34;

int sec_llindar = 2500;
int humit_llindar = 1500;
int submergit_llindar = 800;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(sensorPin);

  if (value < 0) value = 0;
  if (value > 4095) value = 4095;

  Serial.print("Valor brut: ");
  Serial.print(value);
  Serial.print("  -->  Estat: ");

  if (value >= sec_llindar) {
    Serial.println("Sec");
  }
  else if (value >= humit_llindar) {
    Serial.println("Terra humida");
  }
  else if (value >= submergit_llindar) {
    Serial.println("Humitat molt alta");
  }
  else {
    Serial.println("Submergit en aigua");
  }

  delay(3000);
}
