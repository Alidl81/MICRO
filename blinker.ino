int led=5;
// int led1=6;
// int led2=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  
  // pinMode(led1,OUTPUT);
  // pinMode(led2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);

  
  // digitalWrite(led1,HIGH);
  // digitalWrite(led2,HIGH);
  // delay(3000);
  // digitalWrite(led1,LOW);
  // digitalWrite(led2,LOW);
  // delay(500);
  
}
