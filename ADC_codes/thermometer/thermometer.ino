void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Thermometer");
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(A0);
  temp = temp * 4.88; // applied input voltage, in millivolts.
  temp = temp / 10;
  Serial.println(temp);
  delay(2000);
}
