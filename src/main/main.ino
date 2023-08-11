int val_pot_R;
// int val_pot_G;
// int val_pot_B;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val_pot_R = analogRead(A0);
  // val_pot_G = analogRead(A1);
  // val_pot_B = analogRead(A2);
  Serial.println(val_pot_R);
  // Serial.println(val_pot_G);
  // Serial.println(val_pot_B);
  delay(100);
}
