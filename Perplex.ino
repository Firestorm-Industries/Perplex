

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(15, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(15, HIGH);
  delay(500);
  digitalWrite(15, LOW);
  delay(100);
  Serial.println(millis());
}
