//int relay = 7; // for Arduino microcontroller
//int relay = D7; // for ESP8266 microcontroller
int relay = 34; // for ESP32 microcontroller

void setup() {
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(relay, HIGH);
  Serial.println("prendido");
  delay(2000);
  digitalWrite(relay, LOW);
  Serial.println("apagado");
  delay(2000);
}
