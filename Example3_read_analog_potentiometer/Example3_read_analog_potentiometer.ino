int potPin = 0;   
int val = 0;       

void setup() {
  pinMode(potPin, INPUT); 
  Serial.begin(9600);
}
void loop() {
  val = analogRead(potPin);
  Serial.println(val);
  delay(500);                 
}

