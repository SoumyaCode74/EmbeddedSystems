#define FAST 250
#define SLOW 1000

unsigned int d = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);  //Configuring the pin 3 as OUTPUT
  pinMode(5, OUTPUT);  //Configuring the pin 5 as OUTPUT
  pinMode(6, OUTPUT);  //Configuring the pin 6 as OUTPUT
  pinMode(9, OUTPUT);  //Configuring the pin 9 as OUTPUT

}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH); //turn on digital pin 3
  delay(d); //pause for 1 second
  digitalWrite(3, LOW); //turn off digital pin 3
  digitalWrite(5, HIGH); //turn on digital pin 5
  delay(d); //pause for 1 second
  digitalWrite(5, LOW); //turn off digital pin 5
  digitalWrite(6, HIGH); //turn on digital pin 6
  delay(d); //pause for 1 second
  digitalWrite(6, LOW); //turn off digital pin 6
  digitalWrite(9, HIGH); //turn on digital pin 9
  delay(d); //pause for 1 second
  digitalWrite(9, LOW); //turn off digital pin 9

  //My modifications below
  digitalWrite(6, HIGH); //turn on digital pin 6
  delay(d); //pause for 1 second
  digitalWrite(6, LOW); //turn off digital pin 6
  digitalWrite(5, HIGH); //turn on digital pin 5
  delay(d); //pause for 1 second
  digitalWrite(5, LOW); //turn off digital pin 5
  
}
