const int AnalogIn  = A0;

int readingIn = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readingIn = analogRead(AnalogIn);
  Serial.print("V at analog: ");
  float vAtAnalog = readingIn / 1024.0 * 3.3;
  Serial.println(vAtAnalog);
}
