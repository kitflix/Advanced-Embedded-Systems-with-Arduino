void setup()
{
  Serial.begin(9600);  
  Serial.println("LM35 Temeprature sensor test");
}

void loop()
{
  int a = analogRead(A0);  
  Serial.print("Output of ADC = ");
  Serial.println(a);

  a = a * 4.88; // convert it to millivolts
  int temp = a / 10;
  Serial.print("Temperature = ");
  Serial.println(temp);
  delay(1000);
}
