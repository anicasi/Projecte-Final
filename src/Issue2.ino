const int sensorPin = 34;
const int ledPin = 2;

int sec_max = 300;
int humit_max = 1500;
int submergit_max = 4095;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = analogRead(sensorPin);

  if (value < 0) value = 0;
  if (value > 4095) value = 4095;

  Serial.print("Valor brut: ");
  Serial.print(value);
  Serial.print("  -->  Estat: ");

  if (value <= sec_max) {
    Serial.println("Sec");
  }
  else if (value <= humit_max) {
    Serial.println("Terra humida");
  }
  else {
    Serial.println("Submergit en aigua");
  }

  if (value > 100) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(3000);
}
