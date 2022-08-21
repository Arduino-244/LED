#define prtLed 5

int TIME = 300;

void setup()
{
	pinMode(5, OUTPUT);
}

void loop()
{
	digitalWrite(5, HIGH);
	delay(TIME);
	digitalWrite(5, LOW);
	delay(TIME);
}