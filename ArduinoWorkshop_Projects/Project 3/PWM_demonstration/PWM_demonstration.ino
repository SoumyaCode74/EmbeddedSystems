unsigned int d = 50;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 252; i++)
  {
    analogWrite(3, i); //PWM at 3
    analogWrite(5, i+1); //PWM at 5
    analogWrite(6, i+2); //PWM at 6
    analogWrite(9, i+3);
    delay(d);
  }
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(20*d);
  for(int i = 251; i >= 0; i--)
  {
    analogWrite(3, i); //PWM at 3
    analogWrite(5, i+1); //PWM at 5
    analogWrite(6, i+2); //PWM at 6
    analogWrite(9, i+3);
    delay(d);
  }
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(40*d);

}
