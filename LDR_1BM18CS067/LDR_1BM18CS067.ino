const int ledPin = 13;

const int ldrPin = A0;

void setup()
{
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
	pinMode(ldrPin, INPUT);
}
void loop()
{
	int ldrStatus = analogRead(ldrPin);
	Serial.println(ldrStatus);
	if(ldrStatus <=10)
	{
		digitalWrite(ledPin, HIGH);
		Serial.println("LDR is DARK, LED is ON");
	}
	else
	{
		digitalWrite(ledPin, LOW);
		Serial.println("-----------------");
	}
}
	