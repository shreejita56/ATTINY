/*
  ATtiny1616 LED Blink
  Based on the supplied schematic:
    - MCU: ATtiny1616
    - External LED net: LED, assumed connected to PB1 through R4 (1 kOhm)
    - LED cathode goes to GND, so PB1 HIGH should turn it on.

  Target: ATtiny1616 using megaTinyCore in Arduino IDE.
*/

void setup() {
  // Configure PB1 as an output (direct ATtiny1616 port register).
  PORTB.DIRSET = PIN1_bm;
}

void loop() {
  PORTB.OUTSET = PIN1_bm;  // LED ON
  delay(500);

  PORTB.OUTCLR = PIN1_bm;  // LED OFF
  delay(500);
}
