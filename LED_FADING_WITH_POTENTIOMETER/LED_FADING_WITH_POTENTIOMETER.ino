int LED_PIN = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  
  int analogValue = analogRead(A0);
  int brightness = map(analogValue, 0, 1023, 0, 255);
  analogWrite(LED_PIN, brightness);
  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(", Brightness : ");
  Serial.println(brightness);
  delay(100);
}