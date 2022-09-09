unsigned int d = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 2; i  <= 5; i++)
  {
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
//    delay(d);
  }
  for(int i = 4; i >= 3; i--)
  {
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
//    delay(d);
  }

}
