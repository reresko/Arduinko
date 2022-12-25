#define LED 13

byte value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  if(Serial.available()){
    value = Serial.read();
  }
  else {
    value = 0;
  }
  if(value=='a'){
    digitalWrite(LED, HIGH);
    Serial.println("On");
  }
  if(value=='n'){
    digitalWrite(LED, LOW);
    Serial.println("Off");
  }
  if(value=='s'){
    digitalWrite(LED, !digitalRead(LED));
    Serial.println("switched");
  }
}
