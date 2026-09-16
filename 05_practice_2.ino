#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);

  digitalWrite(PIN_LED, HIGH);
}

void loop() {

  digitalWrite(PIN_LED, LOW);
  Serial.println(1);
  delay(1000);

  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, HIGH);
    Serial.println(0);
    delay(100);

    digitalWrite(PIN_LED, LOW);
    Serial.println(1);
    delay(100);
  }

  digitalWrite(PIN_LED, HIGH);
  Serial.println(0);

  while (1) {
  }
}
