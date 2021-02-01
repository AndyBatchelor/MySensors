
//#define MY_DISABLED_SERIAL // Disable Serial Monitor (for Lower Power)
#define MY_BAUD_RATE 115200  // Must match Optiboot Compilation
#define LED_ON_MS    1000    // Time LED is ON (in ms)
#define LED_OFF_MS   1000    // Time LED is OFF (in ms)

#define LED_BUILTIN 6  // 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
#ifndef MY_DISABLED_SERIAL
  Serial.begin(MY_BAUD_RATE);
  //while (!Serial);
  Serial.println("nRF52840 Dongle - Blink & UART0 Test");
#endif
}

// the loop function runs over and over again forever
void loop() {
#ifndef MY_DISABLED_SERIAL
  Serial.println("LED ON");
#endif
  digitalWrite(LED_BUILTIN, HIGH);
  delay(LED_ON_MS);
#ifndef MY_DISABLED_SERIAL
  Serial.println("LED OFF");
#endif
  digitalWrite(LED_BUILTIN, LOW);
  delay(LED_OFF_MS);
}
