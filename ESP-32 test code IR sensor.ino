#define IR_SENSOR_PIN 27
#define LED_PIN 2

void setup() {
  Serial.begin(115200);

  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("IR Presence Detection Started");
}

void loop() {
  int sensorValue = digitalRead(IR_SENSOR_PIN);

  if (sensorValue == LOW) {
    // Object/person detected
    Serial.println("Presence Detected!");
    digitalWrite(LED_PIN, HIGH);
  } 
  else {
    // Nothing detected
    Serial.println("No Presence");
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}