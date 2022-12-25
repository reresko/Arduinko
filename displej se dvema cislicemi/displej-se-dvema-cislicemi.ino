void setup(){
  for (int i=2; i<=10; i++){
   pinMode(i, OUTPUT);
   digitalWrite(i, HIGH);
  }
}

void loop(){
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  allOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  allOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  allOff();
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  allOff();
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  allOff();
  for (int i=2; i<=9; i++){
   digitalWrite(i, LOW);
  }    
  digitalWrite(3, HIGH);  
  allOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  allOff();
  for (int i=2; i<=9; i++){
   digitalWrite(i, LOW);
  }  
  allOff();
  for (int i=2; i<=9; i++){
   digitalWrite(i, LOW);
  }    
  digitalWrite(6, HIGH);  
  allOff();
  for (int i=2; i<=9; i++){
   digitalWrite(i, LOW);
  }    
  digitalWrite(8, HIGH);  
  allOff();
}

void allOff(){
  delay(500);
  for (int i=3; i<=10; i++){
   digitalWrite(i, HIGH);
  }
}