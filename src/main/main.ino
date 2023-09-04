#include <Adafruit_NeoPixel.h>

#define LED_PIN    6 // The pin where the data input of the RGB strip goes.
#define LED_COUNT 71 // The amount of leds on the strip.

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

int val_pot_H;
int val_pot_S;
int val_pot_V;
uint16_t h;
uint8_t s;
uint8_t v;

void setup() {
  Serial.begin(9600);
  strip.begin();
  strip.show();
  strip.setBrightness(50);
}

void loop() {
  readValues();
  convertHSV();
  printNewValues();
  //printValues();
}

void readValues() {
  val_pot_H = analogRead(A0);
  val_pot_S = analogRead(A1);
  val_pot_V = analogRead(A2);
}

void printValues() {
  Serial.print(val_pot_H);
  Serial.print(", ");
  Serial.print(val_pot_S);
  Serial.print(", ");
  Serial.println(val_pot_V);
}

void convertHSV() {
  h = round(val_pot_H * 64.0615835777); // Between 0 and 65535.
  s = round(val_pot_S / 4.01176470588); // Between 0 and 255.
  v = round(val_pot_V / 4.01176470588); // Between 0 and 255.
}

void printNewValues() {
  Serial.print(h);
  Serial.print(", ");
  Serial.print(s);
  Serial.print(", ");
  Serial.println(v);
}
