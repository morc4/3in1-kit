//the number of the LED pin
const int ledPin = 9;

int ledPin = 9;    

void setup() {
  
}

void loop() {
  for (int value = 0 ; value <= 255; value += 5) {
    analogWrite(ledPin, value);
    delay(30);
  }
}