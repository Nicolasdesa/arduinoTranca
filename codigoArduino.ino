// constants won't change. They're used here to set pin numbers:
const int ledPin = 7;    // the number of the LED pin
const char receivedChar;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  if (Serial.available() > 0) { // Check if serial data is available
    char receivedChar = Serial.read(); // Read the received character
        if (receivedChar == '1') {
digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);
    }
}
}
