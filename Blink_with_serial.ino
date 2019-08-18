// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); // build in led - pin 13 (pin 19 on the Atmel 328p IC)
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("PIN 13 - HIGH");   // print HIGH
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  Serial.println("Pin 13 - LOW");    // print LOW
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  Serial.println("RETURN");          // print RETURN
  delay(1000);                       // wait for a second
}
