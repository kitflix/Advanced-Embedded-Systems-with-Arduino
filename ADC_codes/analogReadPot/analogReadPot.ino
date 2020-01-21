void setup()
{
  Serial.begin(9600);  
  Serial.println("Analog Read Test");
}

void loop()
{
  int a = analogRead(A0);  
  Serial.print("Output of ADC = ");
  Serial.println(a);

  Serial.print("The voltage measured im millivolt = ");
  int mv = a * 4.88;
  Serial.print(mv);
  Serial.println("mv");
  delay(1000);
}
