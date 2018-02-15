const int buttonPin = 2; // the pushbutton pin
const int ledPin =  4;   // the LED pin
int buttonState = 0;     // the pushbutton status
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}
void loop() {
 // read the state 
 buttonState = digitalRead(buttonPin);
 // check the pushbutton is pressed. 
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}

