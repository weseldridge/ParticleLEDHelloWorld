/*
 * Set up global variables for the project/
 *
 * These are the pin locations for the LEDS
 */

 int led1 = C0;
 int led2 = D7;

 // Init setup for run time

 void setup ()
 {
   // Configurhttps://build.particle.io/build/59d534fb45fb28e3ad00042c#flashe the pins
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);

   // We need to registar our Particle funtion
   // so we can toggle the LEDS from the cloud
   Particle.function("led", ledToggle);

   // Lets make sure the pins are set to low
   // Just incase...
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
 }

// We are waiting for the cloud.
// Nothing to do here.
 void loop()
 {
   // Who cares
   // ¯\_(ツ)_/¯
 }

 /*
  * Define the function we registared to "led"
  *
  * Particle funtion receive a string command
  * and return an int
  */
 int ledToggle(String command)
 {
   // Check to see if the command is
   // "on" or "off".
   if(command == "on") {
     // Turn on the LEDS
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     return 1;
   }
   else if (command == "off") {
     // Turn off the LEDS
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     return 0;
   }
   else {
     // We got the wrong command...
     return -1;

   }
 }
