/* This is a simple program to sequentially turn on and off 3 LEDs after a given spam of time */

int LED_1 = 13; // Sets the output pin for led 1
int LED_2 = 12; // Sets the output pin for led 2
int LED_3 = 11; // Sets the output pin for led 3

void setup() {
  // put your setup code here, to run once:
  
  pinMode(LED_1, OUTPUT); // Sets the pin of LED 1 to output
  pinMode(LED_2, OUTPUT); // Sets the pin of LED 1 to output
  pinMode(LED_3, OUTPUT); // Sets the pin of LED 1 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, HIGH); // Turns on the first LED
  delay(400); // Waits for 400 ms
  digitalWrite(LED_2, HIGH); // Turns on the second LED
  delay(400); // Waits for 400 ms
  digitalWrite(LED_3, HIGH); // Turns on the third LED
  delay(400); // Waits for 400 ms
  digitalWrite(LED_1, LOW); // Turns off the first LED
  delay(400); // Waits for 400 ms 
  digitalWrite(LED_2, LOW); // Turns off the second LED
  delay(400); // Waits for 400 ms
  digitalWrite(LED_3, LOW); // Turns off the third LED 
  delay(400); // Waits for 400 ms before repeating the complete program again
}
