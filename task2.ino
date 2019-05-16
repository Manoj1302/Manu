int ledPin1 = D0;
int ledPin2 = D1;
int ledPin3 = D2;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  int SensorValue = analogRead(A0);
  Serial.println(SensorValue);

  if ((SensorValue) <= 800)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  } 
  else if ((SensorValue) < 900 && (SensorValue)>800 )
  {
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW);
  }

  else
  {
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
}
