int val_pot_H;
int val_pot_S;
int val_pot_V;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val_pot_H = analogRead(A0);
  val_pot_S = analogRead(A1);
  val_pot_V = analogRead(A2);

  Serial.print(val_pot_H);
  Serial.print(", ");
  Serial.print(val_pot_S);
  Serial.print(", ");
  Serial.println(val_pot_V);

  delay(100);
}
