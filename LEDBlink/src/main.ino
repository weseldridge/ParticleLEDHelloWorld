/*
 * Set up global variables for the project
 *
 * These are the pin locations for the LEDS
 */

int led1 = C0;
int led2 = D7;

 // Init setup for run time
void setup() {
  // Config the pins
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}


// Project run time
// It just loops and loops and loops.
void loop() {
  // Turn the LED On
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  // Wait 2 seconds
  delay(2000);

  // Turn the LED off
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  // Wait 2 seconds
  delay(2000);
}
