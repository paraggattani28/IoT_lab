void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
}

void red()
{
  digitalWrite(13, HIGH);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
}

void yellow()
{
  digitalWrite(13, LOW);
  digitalWrite(12,HIGH);
  digitalWrite(8,LOW);
}
void green()
{
  digitalWrite(13, LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
}
void loop()
{
  red();
  delay(3000);
  yellow();
  delay(1500);
  green();
  delay(3000);
  yellow();
  delay(1500);
}