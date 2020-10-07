const int temperaturePin = 0;
int buzzer = 12;

void setup()
{
  Serial.begin (9600);
  pinMode(buzzer, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  float voltage, degreesC;
  voltage = getVoltage(temperaturePin);
  degreesC = (voltage-0.5)*100.0;
  
  if(degreesC < 37)
  {
    Serial.print(degreesC);
  	Serial.println(" SAFE!");
  }
  
  if(degreesC > 37)
  {
    Serial.print(degreesC);
    Serial.println("FIRE !!!");
    digitalWrite(9, HIGH);
    digitalWrite(buzzer, LOW);
    tone(12, 10000,100);
    delay(100);
  }
  
}

float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}