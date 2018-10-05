void setup() 
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);  
}

void loop() 
{
  if (digitalRead(2) == HIGH || digitalRead(3) == HIGH || digitalRead(4) == HIGH ) 
  {
    Serial.println("MOTION IS ACTIVE");
  }
  else 
  {
    Serial.println("MOTION IS INACTIVE");
  }
  delay(1000);
}
