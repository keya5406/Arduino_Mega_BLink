int led=13;
int timeconstent=1000;
int blink_hz=8;
int Delay= timeconstent / blink_hz;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, 1);
delay(Delay);
digitalWrite(led, 0);
delay(Delay);
}
