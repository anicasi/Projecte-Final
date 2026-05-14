//Al detectar que el terra esta sec, la bomba d'aigua regara automaticament la terra
const int sensorPin = 34;
const int ledPin = 2;
const int bombaPin = 17;

int sec_max = 300;
int humit_max = 1500;
int submergit_max = 4095;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(bombaPin, OUTPUT);
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

    digitalWrite(ledPin, HIGH); 
    digitalWrite(bombaPin, HIGH);
  }
  else if (value <= humit_max) {
    Serial.println("Terra humida");

    digitalWrite(ledPin, LOW);
    digitalWrite(bombaPin, LOW);
  }
  else {
    Serial.println("Submergit en aigua");

    digitalWrite(ledPin, LOW);
    digitalWrite(bombaPin, LOW);
  }

  delay(3000);
}
