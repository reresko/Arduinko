
int ledRed = 10;
int ledOrange = 11;
int ledGreen = 12;
int button = 3;

void setup() {
  for(int a=10; a<=12; a++){
    pinMode(a, OUTPUT);
    digitalWrite(a, LOW);
  }
  pinMode(button, INPUT);
  digitalWrite(ledRed, HIGH);
}

void loop() {
  int buttonState = digitalRead(button);
    digitalWrite(ledRed, HIGH);  
  if (buttonState == HIGH){
    delay(5000);  
    digitalWrite(ledOrange, HIGH);
    delay(1000);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledOrange, LOW);
    delay(3000);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledOrange, HIGH);
    delay(1000);
    digitalWrite(ledOrange, LOW);
  }
}
