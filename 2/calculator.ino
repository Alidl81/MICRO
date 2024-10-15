void setup() {
 
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available() > 0) {
 
  
    int num1 = Serial.parseInt();
  
    char op = Serial.read();
  
    int num2 = Serial.parseInt();
  
    
    if(op == '+'){
      Serial.println(num1 + num2);
    } else if(op == '-'){
      Serial.println(num1 - num2);
    } else if(op == '*'){
      Serial.println(num1 * num2);
    } else if(op == '/'){
      
      if (num2 != 0) {
        Serial.println(num1 / num2);
      } else {
        Serial.println("Error: Division by zero");
      }
    } 
  }
}
