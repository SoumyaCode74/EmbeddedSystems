int analogin = A0;
float voltage;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = (analogRead(analogin)*5.0)/1023;
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");
  delay(1000);
}
